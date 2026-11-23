/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2015 MediaTek Inc.
 */


#ifndef __KREE_SYS_IPC__
#define __KREE_SYS_IPC__

#include <linux/types.h>
#include "tz_cross/trustzone.h"
#include "tz_cross/ree_service.h"

/* Mutex
 */
int KREE_ServMutexCreate(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServMutexDestroy(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServMutexLock(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServMutexUnlock(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServMutexTrylock(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServMutexIslock(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

/* Semaphore
 */
int KREE_ServSemaphoreCreate(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServSemaphoreDestroy(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServSemaphoreDown(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServSemaphoreDownInterruptible(u32 op,
					u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServSemaphoreDownTimeout(u32 op,
					u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServSemaphoreDowntrylock(u32 op,
					u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServSemaphoreUp(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

#if 0
/* wait queue
 */
int KREE_ServWaitqCreate(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServWaitqDestroy(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServWaitqWaitevent(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServWaitqWaiteventTimeout(u32 op,
					u8 param[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServWaitqWakeup(u32 op, u8 param[REE_SERVICE_BUFFER_SIZE]);
#endif
#endif				/* __KREE_SYS_IPC__ */
