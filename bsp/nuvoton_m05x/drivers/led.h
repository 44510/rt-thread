/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2014-11-23     Bright      first implementation
 */

#ifndef __LED_H__
#define __LED_H__

#include <rthw.h>
#include <rtthread.h>
#include "M051Series.h"

void rt_hw_led_on(void);
void rt_hw_led_off(void);

#endif
