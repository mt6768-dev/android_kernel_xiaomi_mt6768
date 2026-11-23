# SPDX-License-Identifier: GPL-2.0
#
# Copyright (C) 2015 MediaTek Inc.
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/pmic/include
subdir-ccflags-y += -I$(srctree)/drivers/power/mediatek/charger
ccflags-y += -I$(srctree)/drivers/misc/mediatek/flashlight/inc
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include/spm_v2/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/usb_c/tcpc/inc
subdir-ccflags-$(CONFIG_USB_MU3D_DRV) += -I$(srctree)/drivers/misc/mediatek/mu3d/drv
subdir-ccflags-$(CONFIG_USB_MTK_HDRC) += -I$(srctree)/drivers/misc/mediatek/usb20/
subdir-ccflags-$(CONFIG_USB_C_SWITCH_U3_MUX) += -I$(srctree)/drivers/misc/mediatek/usb_c/u3_switch
subdir-ccflags-$(CONFIG_USB_C_SWITCH_U3_MUX) += -I$(srctree)/drivers/misc/mediatek/usb_c/inc
ccflags-y += -I$(srctree)/drivers/power/mediatek/
ccflags-y += -I$(srctree)/drivers/power/mediatek/battery

ifneq ($(CONFIG_FPGA_EARLY_PORTING),y)
obj-y += mtk_battery_intf.o
else
obj-y += misc.o
endif
