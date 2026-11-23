/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2017 MediaTek Inc.
 */

#ifndef __MTK_SPM_VCORE_DVFS_IPI_MT6771_H__
#define __MTK_SPM_VCORE_DVFS_IPI_MT6771_H__

enum {
	QOS_IPI_QOS_ENABLE = 0,
	QOS_IPI_VCORE_OPP,
	QOS_IPI_DDR_OPP,
	QOS_IPI_ERROR_HANDLER,
	QOS_IPI_SWPM_INIT,
	QOS_IPI_UPOWER_DATA_TRANSFER,
	QOS_IPI_UPOWER_DUMP_TABLE,
	QOS_IPI_GET_GPU_BW,

	NR_QOS_IPI,
};


struct qos_data {
	unsigned int cmd;
	union {
		struct {
			unsigned int enable;
			unsigned int dvfs_en;
			unsigned int spm_dram_type;
		} qos_init;
		struct {
			unsigned int opp;
			unsigned int vcore_uv;
		} vcore_opp;
		struct {
			unsigned int opp;
			unsigned int ddr_khz;
		} ddr_opp;
		struct {
			unsigned int master_type;
			unsigned int emi_data;
			unsigned int predict_data;
		} error_handler;
		struct {
			unsigned int dram_addr;
			unsigned int dram_size;
			unsigned int dram_ch_num;
		} swpm_init;
		struct {
			unsigned int arg[3];
		} upower_data;
	} u;
};

#endif

