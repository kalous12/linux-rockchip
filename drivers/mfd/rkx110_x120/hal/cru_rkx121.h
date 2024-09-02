/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2023 Rockchip Electronics Co. Ltd.
 *
 * Author: Joseph Chen <chenjh@rock-chips.com>
 */

#ifndef _CRU_RKX121_H

#include "cru_rkx120.h"

// TXCRU_SOFTRST_CON06(Offset:0x418)
#define RKX121_SRST_DRESETN_C_LVDS_TX     0x0000006A
#define RKX121_SRST_LVDS_RESETN_C_LVDS_TX 0x0000006B
#define RKX121_SRST_PRESETN_C_LVDS_TX     0x0000006C

// TXCRU_SOFTRST_CON11(Offset:0x42C)
#define RKX121_SRST_PRESETN_LBIST_ADA_TX 0x000000B1

// TXCRU_GATE_CON06(Offset:0x318)
#define RKX121_DCLK_C_LVDS_TX_GATE     0x0000006A
#define RKX121_CLK_LVDS_C_LVDS_TX_GATE 0x0000006B
#define RKX121_PCLK_C_LVDS_TX_GATE     0x0000006C

// TXCRU_GATE_CON11(Offset:0x32C)
#define RKX121_PCLK_LBIST_ADA_TX_GATE 0x000000B1

// TXCRU_CLKSEL_CON08(Offset:0x120)
#define RKX121_CLK_LVDS1_SEL                    0x01010008
#define RKX121_CLK_LVDS1_SEL_CLK_LVDS1_CM       0U
#define RKX121_CLK_LVDS1_SEL_CLK_LVDS_C_LVDS_TX 1U
#define RKX121_CLK_LVDS0_SEL                    0x01020008
#define RKX121_CLK_LVDS0_SEL_CLK_LVDS0_CM       0U
#define RKX121_CLK_LVDS0_SEL_CLK_LVDS_C_LVDS_TX 1U

// TXCRU_CLKSEL_CON09(Offset:0x124)
#define RKX121_CLK_LVDS_C_LVDS_TX_DIV               0x08000009
#define RKX121_CLK_LVDS_C_LVDS_TX_SEL               0x020E0009
#define RKX121_CLK_LVDS_C_LVDS_TX_SEL_CLK_TXPLL_MUX 0U
#define RKX121_CLK_LVDS_C_LVDS_TX_SEL_CLK_CPLL_MUX  1U
#define RKX121_CLK_LVDS_C_LVDS_TX_SEL_XIN_OSC0_FUNC 2U

/* COMPOSITE */
#define RKX121_CPS_CLK_LVDS_C_LVDS_TX COMPOSITE_CLK(RKX121_CLK_LVDS_C_LVDS_TX_SEL, RKX121_CLK_LVDS_C_LVDS_TX_DIV)
#define RKX121_CPS_CLK_LVDS0          COMPOSITE_CLK(RKX121_CLK_LVDS0_SEL, 0)
#define RKX121_CPS_CLK_LVDS1          COMPOSITE_CLK(RKX121_CLK_LVDS1_SEL, 0)

#endif
