// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef SYS_ARCH_H_INCLUDED_
#define SYS_ARCH_H_INCLUDED_

#include "lwip/err.h"

#if !NO_SYS

// RTOS - Project includes
#include "Concurrency.h"

// Mutex definitions for LwIP
typedef struct mutex sys_mutex_t;

// Thread definitions for LwIP
typedef struct thread sys_thread_t;

// Mailbox definitions for LwIP
typedef struct mq sys_mbox_t;

// Semaphore definitions for LwIP
typedef struct sem sys_sem_t;

#define sys_msleep(ms) delay(ms)

#endif // !NO_SYS

#endif // SYS_ARCH_H_INCLUDED_