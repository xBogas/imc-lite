// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Drivers/ethernet.h"
#include "System/Terminal.h"

#include <Arduino.h>
#include "lan8742.h"

#include <lwipopts.h>
#include "lwip/init.h"
#include "lwip/mem.h"
#include "lwip/memp.h"
#include "lwip/opt.h"

#include "lwip/dhcp.h"
#include "lwip/dns.h"
#include "lwip/init.h"
#include "lwip/ip_addr.h"
#include "lwip/netif.h"
#include "lwip/prot/dhcp.h"
#include "lwip/timeouts.h"
#include "netif/etharp.h"
#include "netif/ethernet.h"

static ETH_HandleTypeDef eth_hal;
static u8 mac_addr[6];
static u32 eth_tick;

enum {
	RX_POOL_OK = 0x00,
	RX_POOL_ERROR = 0x01,
};

struct rx_buff {
	struct pbuf_custom pbuf_custom;
	uint8_t buff[ALIGN_UP(ETH_RX_BUF_SIZE, 32)] __ALIGNED(32);
};

//* Memory Pool Declaration
#ifndef ETH_RX_BUFFER_CNT
#define ETH_RX_BUFFER_CNT 12U
#endif

LWIP_MEMPOOL_DECLARE(rx_memp, ETH_RX_BUFFER_CNT, sizeof(struct rx_buff),
					 "RX PBUF pool");

static uint8_t rx_status_ = RX_POOL_OK;

// LwIP network interface
static struct netif eth_netif;

// Ethernet configuration
static ip_addr_t ip_addr__;
static ip_addr_t netmask__;
static ip_addr_t gateway__;

// Ethernet DMA Descriptors
static ETH_DMADescTypeDef dma_rx__[ETH_RXBUFNB];
static ETH_DMADescTypeDef dma_tx__[ETH_TXBUFNB];

static ETH_TxPacketConfig tx_cfg;

int32_t ETH_PHY_IO_Init(void);
int32_t ETH_PHY_IO_DeInit(void);
int32_t ETH_PHY_IO_WriteReg(uint32_t port, uint32_t reg, uint32_t val);
int32_t ETH_PHY_IO_ReadReg(uint32_t port, uint32_t reg, uint32_t* val);
int32_t ETH_PHY_IO_GetTick(void);

lan8742_Object_t lan_dev;

// *** Variables *** //

// Network interface with lwIP

#ifndef USE_CUSTOM_ETH_PINS

#define RMII_MDC_Pin		GPIO_PIN_1
#define RMII_REF_CLK_Pin	GPIO_PIN_1
#define RMII_MDIO_Pin		GPIO_PIN_2
#define RMII_CRS_DV_Pin		GPIO_PIN_7
#define RMII_RXD0_Pin		GPIO_PIN_4
#define RMII_RXD1_Pin		GPIO_PIN_5
#define RMII_TXD1_Pin		GPIO_PIN_13
#define RMII_TXD1_GPIO_Port GPIOB
#define RMII_TX_EN_Pin		GPIO_PIN_11
#define RMII_TXD0_Pin		GPIO_PIN_13

// Default Ethernet GPIO Configuration
// PC1     ------> ETH_MDC
// PA1     ------> ETH_REF_CLK
// PA2     ------> ETH_MDIO
// PA7     ------> ETH_CRS_DV
// PC4     ------> ETH_RXD0
// PC5     ------> ETH_RXD1
// PB13    ------> ETH_TXD1
// PG11    ------> ETH_TX_EN
// PG13    ------> ETH_TXD0

#endif

// ****************************************************************
//         Low Level Driver Interface (lwIP lib -> ETH HAL)       *
// ****************************************************************

/// @brief Configure Ethernet Hardware clocks and pins
static void eth_hw_config(void)
{
	// TODO: Export initialization for custom pins

	GPIO_InitTypeDef gpio_def = {0};

	// Enable Ethernet Clocks
	__HAL_RCC_ETH_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOG_CLK_ENABLE();

	gpio_def.Pin = RMII_MDC_Pin | RMII_RXD0_Pin | RMII_RXD1_Pin;
	gpio_def.Mode = GPIO_MODE_AF_PP;
	gpio_def.Pull = GPIO_NOPULL;
	gpio_def.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
	gpio_def.Alternate = GPIO_AF11_ETH;
	HAL_GPIO_Init(GPIOC, &gpio_def);

	gpio_def.Pin = RMII_REF_CLK_Pin | RMII_MDIO_Pin | RMII_CRS_DV_Pin;
	gpio_def.Mode = GPIO_MODE_AF_PP;
	gpio_def.Pull = GPIO_NOPULL;
	gpio_def.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
	gpio_def.Alternate = GPIO_AF11_ETH;
	HAL_GPIO_Init(GPIOA, &gpio_def);

	gpio_def.Pin = RMII_TXD1_Pin;
	gpio_def.Mode = GPIO_MODE_AF_PP;
	gpio_def.Pull = GPIO_NOPULL;
	gpio_def.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
	gpio_def.Alternate = GPIO_AF11_ETH;
	HAL_GPIO_Init(RMII_TXD1_GPIO_Port, &gpio_def);

	gpio_def.Pin = RMII_TX_EN_Pin | RMII_TXD0_Pin;
	gpio_def.Mode = GPIO_MODE_AF_PP;
	gpio_def.Pull = GPIO_NOPULL;
	gpio_def.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
	gpio_def.Alternate = GPIO_AF11_ETH;
	HAL_GPIO_Init(GPIOG, &gpio_def);
}

/// @brief Low Level Ethernet Input
/// @param net_if LwIP network interface
/// @return Packet buffer with received data
static struct pbuf* eth_ll_input(struct netif* net_if)
{
	if (rx_status_ != RX_POOL_OK)
		return NULL;

	struct pbuf* p = NULL;

	HAL_ETH_ReadData(&eth_hal, (void**)&p);
	return p;
}

/// @brief Low Level Ethernet Output
/// @param net_if LwIP network interface
/// @param p Packet buffer
/// @return ERR_OK if successful
static err_t eth_ll_output(struct netif* net_if, struct pbuf* p)
{
	// Send data to Ethernet
	uint32_t i = 0U;
	struct pbuf* q = NULL;
	err_t errval = ERR_OK;
	ETH_BufferTypeDef Txbuffer[ETH_TX_DESC_CNT] = {0};

	memset(Txbuffer, 0, ETH_TX_DESC_CNT * sizeof(ETH_BufferTypeDef));

	for (q = p; q != NULL; q = q->next) {
		if (i >= ETH_TX_DESC_CNT)
			return ERR_IF;

		Txbuffer[i].buffer = q->payload;
		Txbuffer[i].len = q->len;

		if (i > 0)
			Txbuffer[i - 1].next = &Txbuffer[i];

		if (q->next == NULL)
			Txbuffer[i].next = NULL;

		i++;
	}

	tx_cfg.Length = p->tot_len;
	tx_cfg.TxBuffer = Txbuffer;
	tx_cfg.pData = p;

	HAL_ETH_Transmit(&eth_hal, &tx_cfg, 20);

	return errval;
}

/// @brief Update Ethernet Link Status (ETH Driver and LwIP)
/// @param net_if LwIP network interface
static void eth_update_link(struct netif* net_if)
{
	s32 state = LAN8742_GetLinkState(&lan_dev);

	if (netif_is_link_up(net_if) && (state <= LAN8742_STATUS_LINK_DOWN)) {
		HAL_ETH_Stop(&eth_hal);
		netif_set_down(net_if);
		netif_set_link_down(net_if);
		return;
	}

	if (!netif_is_link_up(net_if) && (state > LAN8742_STATUS_LINK_DOWN)) {

		ETH_MACConfigTypeDef mac_config = {};
		u32 mode = 0;
		u32 speed = 0;

		switch (state) {
		case LAN8742_STATUS_10MBITS_FULLDUPLEX:
			speed = ETH_SPEED_10M;
			mode = ETH_FULLDUPLEX_MODE;
			break;

		case LAN8742_STATUS_10MBITS_HALFDUPLEX:
			speed = ETH_SPEED_10M;
			mode = ETH_HALFDUPLEX_MODE;
			break;

		case LAN8742_STATUS_100MBITS_FULLDUPLEX:
			speed = ETH_SPEED_100M;
			mode = ETH_FULLDUPLEX_MODE;
			break;

		case LAN8742_STATUS_100MBITS_HALFDUPLEX:
			speed = ETH_SPEED_100M;
			mode = ETH_HALFDUPLEX_MODE;
			break;

		default:
			return;
		}

		// Update mac configuration
		HAL_ETH_GetMACConfig(&eth_hal, &mac_config);

		mac_config.DuplexMode = mode;
		mac_config.Speed = speed;

		HAL_ETH_SetMACConfig(&eth_hal, &mac_config);
		HAL_ETH_Start(&eth_hal);

		netif_set_up(net_if);
		netif_set_link_up(net_if);
	}
}

/// @brief Initialize Ethernet Low Level Hardware
/// @param net_if LwIP network interface
/// @return ERR_OK if successful
static err_t eth_ll_init(struct netif* net_if)
{
	eth_hw_config();

	eth_hal.Instance = ETH;
	eth_hal.Init.MACAddr = mac_addr;
	eth_hal.Init.MediaInterface = HAL_ETH_RMII_MODE;
	eth_hal.Init.RxDesc = dma_rx__;
	eth_hal.Init.TxDesc = dma_tx__;
	eth_hal.Init.RxBuffLen = ETH_RX_BUF_SIZE; // 1536;

	if (HAL_ETH_Init(&eth_hal) != HAL_OK) {
		debug("Failed to initialize ETH HAL");
		return ERR_IF;
	}

	// Config Transmit Packet
	memset(&tx_cfg, 0, sizeof(ETH_TxPacketConfig));
	tx_cfg.Attributes =
		ETH_TX_PACKETS_FEATURES_CSUM | ETH_TX_PACKETS_FEATURES_CRCPAD;
	tx_cfg.ChecksumCtrl = ETH_CHECKSUM_IPHDR_PAYLOAD_INSERT_PHDR_CALC;
	tx_cfg.CRCPadCtrl = ETH_CRC_PAD_INSERT;

	// Initialize Ethernet rx memory pool
	LWIP_MEMPOOL_INIT(rx_memp);

	// Set MAC address
	net_if->hwaddr_len = ETHARP_HWADDR_LEN;
	memcpy(net_if->hwaddr, mac_addr, ETHARP_HWADDR_LEN);

	// Set Maximum Transfer Unit
	net_if->mtu = ETH_MAX_PAYLOAD;

	// Set flags
	net_if->flags = NETIF_FLAG_BROADCAST | NETIF_FLAG_ETHARP;

	// Initialize device
	lan8742_IOCtx_t lan_callbacks = {
		ETH_PHY_IO_Init,	ETH_PHY_IO_DeInit,	ETH_PHY_IO_WriteReg,
		ETH_PHY_IO_ReadReg, ETH_PHY_IO_GetTick,
	};

	LAN8742_RegisterBusIO(&lan_dev, &lan_callbacks);
	LAN8742_Init(&lan_dev);

	// Get link status
	eth_update_link(net_if);
	return ERR_OK;
}

/// @brief Initialize LwIP Ethernet Interface
/// @param net_if LwIP network interface
/// @return ERR_OK if successful
static err_t eth_if_init(struct netif* net_if)
{
	// Initialize Ethernet Interface
	LWIP_ASSERT("netif != NULL", (net_if != NULL));

#if LWIP_NETIF_HOSTNAME
	net_if->hostname = "stm32f7";
#endif

	net_if->name[0] = 'j';
	net_if->name[1] = 'b';

	net_if->output = etharp_output;
	net_if->linkoutput = eth_ll_output;

	return eth_ll_init(net_if);
}

/// @brief Check Ethernet Input
/// @param net_if Ethernet network interface
static void eth_input(struct netif* net_if)
{
	// Process Ethernet input
	err_t err;
	struct pbuf* p = eth_ll_input(net_if);

	while (p != NULL) {
		err = net_if->input(p, net_if);

		if (err != ERR_OK)
			pbuf_free(p);

		p = eth_ll_input(net_if);
	}
}

static bool lwip_started = false;

// *** Exported Functions *** //

void eth_init(u8* ip, u8* netmask, u8* gateway)
{
	if (!lwip_started) {
		// Initialize lwIP
		lwip_started = true;
		lwip_init();
	}

	IP_ADDR4(&ip_addr__, ip[0], ip[1], ip[2], ip[3]);

	if (netmask)
		IP_ADDR4(&netmask__, netmask[0], netmask[1], netmask[2], netmask[3]);
	else
		IP_ADDR4(&netmask__, 255, 255, 255, 0);

	if (gateway)
		IP_ADDR4(&gateway__, gateway[0], gateway[1], gateway[2], gateway[3]);
	else
		IP_ADDR4(&gateway__, ip[0], ip[1], 0, 1);

	netif_remove(&eth_netif);
	netif_add(&eth_netif, &ip_addr__, &netmask__, &gateway__, NULL, eth_if_init,
			  ethernet_input);
	netif_set_default(&eth_netif);

	eth_update_link(&eth_netif);

	// netif_set_link_callback(&eth_netif, eth_update_link);

	eth_ll_init(&eth_netif);
}

void eth_set_mac(u8* mac)
{
	if (lwip_started)
		return;

	if (mac != NULL) {
		memcpy(mac_addr, mac, 6);
		return;
	}

	// OUI for STMicroelectronics
	mac_addr[0] = 0x00;
	mac_addr[1] = 0x80;
	mac_addr[2] = 0xE1;

	u32 uid = HAL_GetUIDw0();
	mac_addr[3] = (uid >> 16) & 0xFF;
	mac_addr[4] = (uid >> 8) & 0xFF;
	mac_addr[5] = uid & 0xFF;
}

void eth_get_mac(u8* mac)
{
	memcpy(mac, mac_addr, 6);
}

void eth_get_ip(u8* ip)
{
	ip[0] = ip4_addr1(&ip_addr__);
	ip[1] = ip4_addr2(&ip_addr__);
	ip[2] = ip4_addr3(&ip_addr__);
	ip[3] = ip4_addr4(&ip_addr__);
}

u32 eth_get_ip_addr(void)
{
	return ip_addr__.addr;
}

void eth_get_mask(u8* mask)
{
	mask[0] = ip4_addr1(&netmask__);
	mask[1] = ip4_addr2(&netmask__);
	mask[2] = ip4_addr3(&netmask__);
	mask[3] = ip4_addr4(&netmask__);
}

u32 eth_get_mask_addr(void)
{
	return netmask__.addr;
}

void eth_get_gw(u8* gw)
{
	gw[0] = ip4_addr1(&gateway__);
	gw[1] = ip4_addr2(&gateway__);
	gw[2] = ip4_addr3(&gateway__);
	gw[3] = ip4_addr4(&gateway__);
}

void eth_process(void)
{
	eth_input(&eth_netif);

	sys_check_timeouts();

	if (HAL_GetTick() - eth_tick >= 500) {
		eth_tick = HAL_GetTick();
		eth_update_link(&eth_netif);
	}
}

// *** Exported Functions *** //

// ****************************************************************
//                  ETH Rx Memory Poll Management                 *
// ****************************************************************

/// @brief Free custom pbufs allocated for DMA Descriptors buffers.
/// @param p custom struct pbuf to free
void pbuf_free_custom(struct pbuf* p)
{
	struct pbuf_custom* custom_pbuf = (struct pbuf_custom*)p;
	LWIP_MEMPOOL_FREE(rx_memp, custom_pbuf);

	// Signal pool is available
	rx_status_ = RX_POOL_OK;
}

/// @brief Callback to allocate a buffer for the received data. This function is
/// called by the HAL ETH library and a buffer is needed for DMA Descriptor.
/// @param buff Pointer to buffer to allocate
void HAL_ETH_RxAllocateCallback(uint8_t** buff)
{
	struct pbuf_custom* p = LWIP_MEMPOOL_ALLOC(rx_memp);
	if (p) {
		/* Get the buff from the struct pbuf address. */
		*buff = (uint8_t*)p + offsetof(struct rx_buff, buff);
		p->custom_free_function = pbuf_free_custom;
		/* Initialize the struct pbuf.
		 * This must be performed whenever a buffer's allocated because it may
		 * be changed by lwIP or the app, e.g., pbuf_free decrements ref. */
		pbuf_alloced_custom(PBUF_RAW, 0, PBUF_REF, p, *buff, ETH_RX_BUF_SIZE);
	} else {
		// Signal pool is not available
		term_panic("No buffers available");
		rx_status_ = RX_POOL_ERROR;
		*buff = NULL;
	}
}

/// @brief Link the received buffers into a chain of pbufs.
/// @param pStart Pointer to the start of Rx Buffer
/// @param pEnd Pointer to the end of Rx Buffer
/// @param buff Pointer to the buffer
/// @param Length Length of the buffer
void HAL_ETH_RxLinkCallback(void** pStart, void** pEnd, uint8_t* buff,
							uint16_t Length)
{
	struct pbuf** ppStart = (struct pbuf**)pStart;
	struct pbuf** ppEnd = (struct pbuf**)pEnd;
	struct pbuf* p = NULL;

	// Get the struct pbuf address from the buffer.
	// Each buffer is associated with a struct custom_pbuf.
	p = (struct pbuf*)(buff - offsetof(struct rx_buff, buff));
	p->next = NULL;
	p->tot_len = 0;
	p->len = Length;

	/* Chain the buffer. */
	if (!*ppStart) {
		/* The first buffer of the packet. */
		*ppStart = p;
	} else {
		/* Chain the buffer to the end of the packet. */
		(*ppEnd)->next = p;
	}
	*ppEnd = p;

	/* Update the total length of all the buffers of the chain. Each pbuf in the
	 * chain should have its tot_len set to its own length, plus the length of
	 * all the following pbufs in the chain. */
	for (p = *ppStart; p != NULL; p = p->next)
		p->tot_len += Length;

	/* Invalidate data cache because Rx DMA's writing to physical memory makes
	 * it stale. */
	SCB_InvalidateDCache_by_Addr((uint32_t*)buff, Length);
}

// ****************************************************************
//                      Lan8742 PHY Callbacks                     *
// ****************************************************************

int32_t ETH_PHY_IO_Init(void)
{
	HAL_ETH_SetMDIOClockRange(&eth_hal);
	return 0;
}

int32_t ETH_PHY_IO_DeInit(void)
{
	return 0;
}

int32_t ETH_PHY_IO_WriteReg(uint32_t port, uint32_t reg, uint32_t val)
{
	bool err = HAL_OK != HAL_ETH_WritePHYRegister(&eth_hal, port, reg, val);

	return err ? -1 : 0;
}

int32_t ETH_PHY_IO_ReadReg(uint32_t port, uint32_t reg, uint32_t* val)
{
	bool err = HAL_OK != HAL_ETH_ReadPHYRegister(&eth_hal, port, reg, val);

	return err ? -1 : 0;
}

int32_t ETH_PHY_IO_GetTick(void)
{
	return HAL_GetTick();
}
