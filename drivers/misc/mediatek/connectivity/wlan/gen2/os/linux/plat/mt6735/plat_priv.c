/*
* Copyright (C) 2016 MediaTek Inc.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/
#include <linux/kernel.h>
#include "mt-plat/mt_hotplug_strategy.h"
#include "gl_typedef.h"
#include <mt_vcore_dvfs.h>

INT32 kalBoostCpu(UINT_32 core_num)
{
	UINT_32 cpu_num;

	if (core_num != 0)
		core_num += 2; /* For denali only, additional 2 cores for HT20 peak throughput*/
	if (core_num > 4)
		cpu_num = 4; /* There are only 4 cores for denali */
	pr_warn("enter kalBoostCpu, core_num:%d\n", core_num);

	hps_set_cpu_num_base(BASE_WIFI, core_num, 0);

	return 0;
}

