/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2023, Linaro Limited
 */

#ifndef QCOM_PHY_QMP_QSERDES_TXRX_USB_V6_H_
#define QCOM_PHY_QMP_QSERDES_TXRX_USB_V6_H_

#define QSERDES_V6_TX_CLKBUF_ENABLE				0x08
#define QSERDES_V6_TX_TX_EMP_POST1_LVL				0x0c
#define QSERDES_V6_TX_TX_DRV_LVL				0x14
#define QSERDES_V6_TX_RESET_TSYNC_EN				0x1c
#define QSERDES_V6_TX_PRE_STALL_LDO_BOOST_EN			0x20
#define QSERDES_V6_TX_TX_BAND					0x24
#define QSERDES_V6_TX_INTERFACE_SELECT				0x2c
#define QSERDES_V6_TX_RES_CODE_LANE_TX				0x34
#define QSERDES_V6_TX_RES_CODE_LANE_RX				0x38
#define QSERDES_V6_TX_RES_CODE_LANE_OFFSET_TX			0x3c
#define QSERDES_V6_TX_RES_CODE_LANE_OFFSET_RX			0x40
#define QSERDES_V6_TX_TRANSCEIVER_BIAS_EN			0x54
#define QSERDES_V6_TX_HIGHZ_DRVR_EN				0x58
#define QSERDES_V6_TX_TX_POL_INV				0x5c
#define QSERDES_V6_TX_PARRATE_REC_DETECT_IDLE_EN		0x60
#define QSERDES_V6_TX_BIST_PATTERN7				0x7c
#define QSERDES_V6_TX_LANE_MODE_1				0x84
#define QSERDES_V6_TX_LANE_MODE_3				0x8c
#define QSERDES_V6_TX_LANE_MODE_4				0x90
#define QSERDES_V6_TX_LANE_MODE_5				0x94
#define QSERDES_V6_TX_RCV_DETECT_LVL_2				0xa4
#define QSERDES_V6_TX_TRAN_DRVR_EMP_EN				0xc0
#define QSERDES_V6_TX_TX_INTERFACE_MODE				0xc4
#define QSERDES_V6_TX_VMODE_CTRL1				0xc8
#define QSERDES_V6_TX_PI_QEC_CTRL				0xe4

#define QSERDES_V6_RX_UCDR_FO_GAIN				0x08
#define QSERDES_V6_RX_UCDR_SO_GAIN				0x14
#define QSERDES_V6_RX_UCDR_FASTLOCK_FO_GAIN			0x30
#define QSERDES_V6_RX_UCDR_SO_SATURATION_AND_ENABLE		0x34
#define QSERDES_V6_RX_UCDR_FASTLOCK_COUNT_LOW			0x3c
#define QSERDES_V6_RX_UCDR_FASTLOCK_COUNT_HIGH			0x40
#define QSERDES_V6_RX_UCDR_PI_CONTROLS				0x44
#define QSERDES_V6_RX_UCDR_SB2_THRESH1				0x4c
#define QSERDES_V6_RX_UCDR_SB2_THRESH2				0x50
#define QSERDES_V6_RX_UCDR_SB2_GAIN1				0x54
#define QSERDES_V6_RX_UCDR_SB2_GAIN2				0x58
#define QSERDES_V6_RX_AUX_DATA_TCOARSE_TFINE			0x60
#define QSERDES_V6_RX_TX_ADAPT_POST_THRESH			0xcc
#define QSERDES_V6_RX_VGA_CAL_CNTRL1				0xd4
#define QSERDES_V6_RX_VGA_CAL_CNTRL2				0xd8
#define QSERDES_V6_RX_GM_CAL					0xdc
#define QSERDES_V6_RX_RX_EQU_ADAPTOR_CNTRL2			0xec
#define QSERDES_V6_RX_RX_EQU_ADAPTOR_CNTRL3			0xf0
#define QSERDES_V6_RX_RX_EQU_ADAPTOR_CNTRL4			0xf4
#define QSERDES_V6_RX_RX_IDAC_TSETTLE_LOW			0xf8
#define QSERDES_V6_RX_RX_IDAC_TSETTLE_HIGH			0xfc
#define QSERDES_V6_RX_RX_EQ_OFFSET_ADAPTOR_CNTRL1		0x110
#define QSERDES_V6_RX_SIDGET_ENABLES				0x118
#define QSERDES_V6_RX_SIGDET_CNTRL				0x11c
#define QSERDES_V6_RX_SIGDET_DEGLITCH_CNTRL			0x124
#define QSERDES_V6_RX_RX_MODE_00_LOW				0x15c
#define QSERDES_V6_RX_RX_MODE_00_HIGH				0x160
#define QSERDES_V6_RX_RX_MODE_00_HIGH2				0x164
#define QSERDES_V6_RX_RX_MODE_00_HIGH3				0x168
#define QSERDES_V6_RX_RX_MODE_00_HIGH4				0x16c
#define QSERDES_V6_RX_RX_MODE_01_LOW				0x170
#define QSERDES_V6_RX_RX_MODE_01_HIGH				0x174
#define QSERDES_V6_RX_RX_MODE_01_HIGH2				0x178
#define QSERDES_V6_RX_RX_MODE_01_HIGH3				0x17c
#define QSERDES_V6_RX_RX_MODE_01_HIGH4				0x180
#define QSERDES_V6_RX_RX_MODE_10_LOW				0x184
#define QSERDES_V6_RX_RX_MODE_10_HIGH				0x188
#define QSERDES_V6_RX_RX_MODE_10_HIGH2				0x18c
#define QSERDES_V6_RX_RX_MODE_10_HIGH3				0x190
#define QSERDES_V6_RX_RX_MODE_10_HIGH4				0x194
#define QSERDES_V6_RX_DFE_EN_TIMER				0x1a0
#define QSERDES_V6_RX_DFE_CTLE_POST_CAL_OFFSET			0x1a4
#define QSERDES_V6_RX_DCC_CTRL1					0x1a8
#define QSERDES_V6_RX_VTH_CODE					0x1b0
#define QSERDES_V6_RX_SIGDET_CAL_CTRL1				0x1e4
#define QSERDES_V6_RX_SIGDET_CAL_TRIM				0x1f8

#endif
