# SPDX-License-Identifier: GPL-2.0
#
# Copyright (C) 2015 MediaTek Inc.

#
# Makefile for external display driver.
#

ifneq ($(CONFIG_MTK_CMDQ), y)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/video/cmdq_dummy/
endif

ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/ \
             -I$(srctree)/drivers/misc/mediatek/ext_disp/  \
             -I$(srctree)/drivers/misc/mediatek/ext_disp/include/  \
             -I$(srctree)/drivers/misc/mediatek/ext_disp/common/test/ \
             -I$(srctree)/drivers/misc/mediatek/gpu/ged/include \
             -I$(srctree)/drivers/misc/mediatek/video/common \
             -I$(srctree)/drivers/misc/mediatek/video/include/ \
             -I$(srctree)/drivers/misc/mediatek/video/$(MTK_PLATFORM)/dispsys/ \
             -I$(srctree)/drivers/misc/mediatek/video/$(MTK_PLATFORM)/videox/ \
             -I$(srctree)/drivers/misc/mediatek/sync/ \
             -I$(srctree)/drivers/misc/mediatek/hdmi/$(CONFIG_CUSTOM_KERNEL_HDMI)/ \
             -I$(srctree)/drivers/misc/mediatek/cmdq/v3/ \
             -I$(srctree)/drivers/misc/mediatek/cmdq/v3/$(MTK_PLATFORM)/ \
             -I$(srctree)/drivers/misc/mediatek/hdmi/inc/ \
             -I$(srctree)/drivers/misc/mediatek/smi \
             -I$(srctree)/drivers/staging/android/ion \
             -I$(srctree)/drivers/staging/android/ion/mtk \
             -I$(srctree)/drivers/misc/mediatek/lcm/inc

subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/mmp/

obj-y := \
	external_display.o \
	mtk_extd_mgr.o   \
	extd_debug.o \
	extd_utils.o \
	extd_hdmi.o \
	extd_epd.o \
	extd_multi_control.o \
	extd_factory.o
