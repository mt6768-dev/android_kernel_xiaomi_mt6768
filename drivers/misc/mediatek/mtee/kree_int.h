/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2015 MediaTek Inc.
 */


#ifndef __KREE_INT_H__
#define __KREE_INT_H__

#include "tz_cross/ree_service.h"


/* Maximum temp memory parameter size. */
#define TEE_PARAM_MEM_LIMIT   (4096)


int KREE_InitTZ(void);

void tz_test(void);

int KREE_TeeServiceCallNoCheck(KREE_SESSION_HANDLE handle,
		uint32_t command, uint32_t paramTypes,
		union MTEEC_PARAM param[4]);

typedef int(*KREE_REE_Service_Func) (u32 op,
					u8 uparam[REE_SERVICE_BUFFER_SIZE]);

struct clk *mtee_clk_get(const char *clk_name);
struct device *mtee_pmdev_get(const char *pm_name);

/* REE Services function prototype */
int KREE_ServRequestIrq(u32 op, u8 uparam[REE_SERVICE_BUFFER_SIZE]);
int KREE_ServEnableIrq(u32 op, u8 uparam[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServEnableClock(u32 op, u8 uparam[REE_SERVICE_BUFFER_SIZE]);
int KREE_ServDisableClock(u32 op, u8 uparam[REE_SERVICE_BUFFER_SIZE]);

int KREE_ServPMGet(u32 op, u8 uparam[REE_SERVICE_BUFFER_SIZE]);
int KREE_ServPMPut(u32 op, u8 uparam[REE_SERVICE_BUFFER_SIZE]);

#endif				/* __KREE_INT_H__ */
