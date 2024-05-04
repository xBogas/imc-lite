// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef LIB_LWIPOPTS_H_INCLUDED_
#define LIB_LWIPOPTS_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Defines whether lwIP operates in a NO_SYS mode (where no operating
 * system is used) or with an operating system. Setting it to 0 means that an
 * operating system is used.
 */
#define NO_SYS                      0

/**
 * Defines whether lwIP should use lightweight protection measures for
 * multithreading support. Setting it to 0 disables lightweight protection.
 */
#define SYS_LIGHTWEIGHT_PROT        0

/**
 * Defines the alignment requirement for memory allocation in lwIP. In this
 * case, memory is aligned to a 4-byte boundary.
 */
#define MEM_ALIGNMENT               4

/**
 * Enables support for Ethernet networking in lwIP.
 */
#define LWIP_ETHERNET               1

/**
 * Enables support for IPv4 networking in lwIP.
 */
#define LWIP_IPV4                   1


// ****************************************************************
//                      TCP/IP Configuration                      *
// ****************************************************************

#define LWIP_TCP                    0

/**
 * Defines the length of the TCP send queue (in pbufs), which determines how
 * many TCP segments can be queued for transmission.
 */
#define TCP_SND_QUEUELEN            9

/**
 * Defines the low threashold for the TCP send buffer. When the amount of data
 * in the send buffer drops below this threshold, the TCP stack is notified to
 * resume writing data.
 */
#define TCP_SNDLOWAT                1071

/**
 * defines the length of the TCP send queue, which determines how many TCP
 * segments can be queued for transmission.
 *
 */
#define TCP_SNDQUEUELOWAT           5

/**
 * Defines the difference in window for the TCP send buffer. It determines when
 * the TCP stack should advertise a larger window size to the sender.
 */
#define TCP_WND_UPDATE_THRESHOLD    536

/**
 * Enables the use of a callback function for link status changes in lwIP
 * network interface.
 */
#define LWIP_NETIF_LINK_CALLBACK    1

/**
 *  Disables the use of netconn API for lwIP network connections.
 */
#define LWIP_NETCONN                0

/**
 *  Disables the use of sockets API for lwIP network connections.
 */
#define LWIP_SOCKET                 0

#ifndef RELEASE
/**
 * Enables collection of lwIP statistics.
 */
#define LWIP_STATS                  1

/**
 * Enables display of lwIP statistics.
 */
#define LWIP_STATS_DISPLAY          1


#define TCP_STATS                   0

#endif

/**
 * Enable hardware checksum.
 */
#define CHECKSUM_GEN_IP             0
#define CHECKSUM_GEN_UDP            0
#define CHECKSUM_GEN_TCP            0
#define CHECKSUM_GEN_ICMP           0
#define CHECKSUM_GEN_ICMP6          0
#define CHECKSUM_CHECK_IP           0
#define CHECKSUM_CHECK_UDP          0
#define CHECKSUM_CHECK_TCP          0
#define CHECKSUM_CHECK_ICMP         0
#define CHECKSUM_CHECK_ICMP6        0

#ifdef __cplusplus
}
#endif

#endif /*__LWIPOPTS__H__ */