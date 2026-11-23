/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
*/

#ifndef __SMI_HW_H__
#define __SMI_HW_H__

#include <clk-mt6771-pg.h>
#include <smi_port.h>

static const u32 smi_subsys_to_larbs[NR_SYSS] = {
	[SYS_DIS] = ((1 << 0) | (1 << (SMI_LARB_NUM))),
	[SYS_VDE] = (1 << 1),
	[SYS_ISP] = ((1 << 2) | (1 << 5)),
	[SYS_CAM] = ((1 << 3) | (1 << 6)),
	[SYS_VEN] = (1 << 4),
};

#if IS_ENABLED(CONFIG_MMPROFILE)
#include <mmprofile.h>

static const char *smi_mmp_name[NR_SYSS] = {
	[SYS_DIS] = "DIS", [SYS_VDE] = "VDE",
	[SYS_ISP] = "ISP", [SYS_CAM] = "CAM", [SYS_VEN] = "VEN",
};
static mmp_event smi_mmp_event[NR_SYSS];
#endif
#endif
