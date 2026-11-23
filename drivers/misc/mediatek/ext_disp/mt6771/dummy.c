/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

/*external display dummy driver*/
/*
 *
void ext_disp_dummy(void)
{

}
*/

#include "disp_session.h"

void external_display_control_init(void)
{
}

int external_display_switch_mode(enum DISP_MODE mode,
		unsigned int *session_created, unsigned int session)
{
	return 0;
}

int external_display_wait_for_vsync(void *config, unsigned int session)
{
	return 0;
}

