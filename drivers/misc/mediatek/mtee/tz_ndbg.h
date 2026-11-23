/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2015 MediaTek Inc.
 */

#ifndef __TZ_NDBG_T__
#define __TZ_NDBG_T__

/* enable ndbg implementation */
#ifndef CONFIG_TRUSTY /* disable ndbg if trusty is on for now. */
#define CC_ENABLE_NDBG
#endif

#endif				/* __TZ_NDBG_T__ */
