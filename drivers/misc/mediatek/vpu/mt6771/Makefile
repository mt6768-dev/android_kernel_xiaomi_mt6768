# SPDX-License-Identifier: GPL-2.0
#
# Copyright (C) 2016 MediaTek Inc.

ccflags-y += -I$(srctree)/drivers/staging/android/mtk_ion/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/vpu/2.0
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include
ccflags-y += -I$(srctree)/drivers/devfreq

obj-$(CONFIG_MTK_VPU_SUPPORT) += vpu_hw.o vpu_reg.o
obj-$(CONFIG_MTK_VPU_SUPPORT) += vpu_profile.o
