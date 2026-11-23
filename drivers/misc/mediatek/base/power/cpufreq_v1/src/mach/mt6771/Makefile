# SPDX-License-Identifier: GPL-2.0
#
# Copyright (C) 2016 MediaTek Inc.

ccflags-y +=	\
	-I$(CPUFREQ_ROOT_DIR)/inc	\
	-I$(CPUFREQ_ROOT_DIR)/src/mach/$(CONFIG_MTK_PLATFORM)	\
	-I$(srctree)/drivers/misc/mediatek/base/power/include	\
	-I$(srctree)/drivers/misc/mediatek/base/power/eem_v2/$(CONFIG_MTK_PLATFORM)/inc	\
	-I$(srctree)/drivers/misc/mediatek/freqhopping	\
	-I$(srctree)/drivers/misc/mediatek/freqhopping/$(CONFIG_MTK_PLATFORM)	\
	-I$(srctree)/drivers/misc/mediatek/sspm

ifeq ($(findstring k71v1_bsp_2g,$(PROJECT_DTB_NAMES)),k71v1_bsp_2g)
subdir-ccflags-y = -DLV
endif

ifeq ($(findstring k71v1_bsp_2g_ducam,$(PROJECT_DTB_NAMES)),k71v1_bsp_2g_ducam)
subdir-ccflags-y = -DLV
endif

obj-y += mtk_cpufreq_platform.o
