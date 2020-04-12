/*
 * Author: Tim (cpldcpu@gmail.com), Patrick Pederse (ctx.xda@gmail.com)
 *
 * A stripped down and altered version of cpldcpu's light_ws2812.h header.
 *
 * License: GNU GPL v2+ (see License.txt)
 +
 */ 

#pragma once

#include "config.h"
#include "stdint.h"

#if STRIP_TYPE == WS2812 

#define WS2812_DIN_MSK (1 << WS2812_DIN)

void ws2812_prep_tx();
void ws2812_wait_rst();
void ws2812_tx_byte(uint8_t byte);
void ws2812_end_tx();

#endif