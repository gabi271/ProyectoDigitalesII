/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Rx */
#define Rx__0__INTTYPE CYREG_PICU12_INTTYPE2
#define Rx__0__MASK 0x04u
#define Rx__0__PC CYREG_PRT12_PC2
#define Rx__0__PORT 12u
#define Rx__0__SHIFT 2u
#define Rx__AG CYREG_PRT12_AG
#define Rx__BIE CYREG_PRT12_BIE
#define Rx__BIT_MASK CYREG_PRT12_BIT_MASK
#define Rx__BYP CYREG_PRT12_BYP
#define Rx__DM0 CYREG_PRT12_DM0
#define Rx__DM1 CYREG_PRT12_DM1
#define Rx__DM2 CYREG_PRT12_DM2
#define Rx__DR CYREG_PRT12_DR
#define Rx__INP_DIS CYREG_PRT12_INP_DIS
#define Rx__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define Rx__MASK 0x04u
#define Rx__PORT 12u
#define Rx__PRT CYREG_PRT12_PRT
#define Rx__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define Rx__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define Rx__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define Rx__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define Rx__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define Rx__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define Rx__PS CYREG_PRT12_PS
#define Rx__SHIFT 2u
#define Rx__SIO_CFG CYREG_PRT12_SIO_CFG
#define Rx__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define Rx__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define Rx__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define Rx__SLW CYREG_PRT12_SLW

/* I2C */
#define I2C_I2C_FF__ADR CYREG_I2C_ADR
#define I2C_I2C_FF__CFG CYREG_I2C_CFG
#define I2C_I2C_FF__CLK_DIV1 CYREG_I2C_CLK_DIV1
#define I2C_I2C_FF__CLK_DIV2 CYREG_I2C_CLK_DIV2
#define I2C_I2C_FF__CSR CYREG_I2C_CSR
#define I2C_I2C_FF__D CYREG_I2C_D
#define I2C_I2C_FF__MCSR CYREG_I2C_MCSR
#define I2C_I2C_FF__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define I2C_I2C_FF__PM_ACT_MSK 0x04u
#define I2C_I2C_FF__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define I2C_I2C_FF__PM_STBY_MSK 0x04u
#define I2C_I2C_FF__TMOUT_CFG0 CYREG_I2C_TMOUT_CFG0
#define I2C_I2C_FF__TMOUT_CFG1 CYREG_I2C_TMOUT_CFG1
#define I2C_I2C_FF__TMOUT_CSR CYREG_I2C_TMOUT_CSR
#define I2C_I2C_FF__TMOUT_SR CYREG_I2C_TMOUT_SR
#define I2C_I2C_FF__XCFG CYREG_I2C_XCFG
#define I2C_I2C_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define I2C_I2C_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define I2C_I2C_IRQ__INTC_MASK 0x8000u
#define I2C_I2C_IRQ__INTC_NUMBER 15u
#define I2C_I2C_IRQ__INTC_PRIOR_NUM 7u
#define I2C_I2C_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_15
#define I2C_I2C_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define I2C_I2C_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* SCL */
#define SCL__0__INTTYPE CYREG_PICU12_INTTYPE4
#define SCL__0__MASK 0x10u
#define SCL__0__PC CYREG_PRT12_PC4
#define SCL__0__PORT 12u
#define SCL__0__SHIFT 4u
#define SCL__AG CYREG_PRT12_AG
#define SCL__BIE CYREG_PRT12_BIE
#define SCL__BIT_MASK CYREG_PRT12_BIT_MASK
#define SCL__BYP CYREG_PRT12_BYP
#define SCL__DM0 CYREG_PRT12_DM0
#define SCL__DM1 CYREG_PRT12_DM1
#define SCL__DM2 CYREG_PRT12_DM2
#define SCL__DR CYREG_PRT12_DR
#define SCL__INP_DIS CYREG_PRT12_INP_DIS
#define SCL__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define SCL__MASK 0x10u
#define SCL__PORT 12u
#define SCL__PRT CYREG_PRT12_PRT
#define SCL__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SCL__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SCL__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SCL__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SCL__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SCL__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SCL__PS CYREG_PRT12_PS
#define SCL__SHIFT 4u
#define SCL__SIO_CFG CYREG_PRT12_SIO_CFG
#define SCL__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SCL__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SCL__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SCL__SLW CYREG_PRT12_SLW

/* SDA */
#define SDA__0__INTTYPE CYREG_PICU12_INTTYPE5
#define SDA__0__MASK 0x20u
#define SDA__0__PC CYREG_PRT12_PC5
#define SDA__0__PORT 12u
#define SDA__0__SHIFT 5u
#define SDA__AG CYREG_PRT12_AG
#define SDA__BIE CYREG_PRT12_BIE
#define SDA__BIT_MASK CYREG_PRT12_BIT_MASK
#define SDA__BYP CYREG_PRT12_BYP
#define SDA__DM0 CYREG_PRT12_DM0
#define SDA__DM1 CYREG_PRT12_DM1
#define SDA__DM2 CYREG_PRT12_DM2
#define SDA__DR CYREG_PRT12_DR
#define SDA__INP_DIS CYREG_PRT12_INP_DIS
#define SDA__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define SDA__MASK 0x20u
#define SDA__PORT 12u
#define SDA__PRT CYREG_PRT12_PRT
#define SDA__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SDA__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SDA__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SDA__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SDA__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SDA__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SDA__PS CYREG_PRT12_PS
#define SDA__SHIFT 5u
#define SDA__SIO_CFG CYREG_PRT12_SIO_CFG
#define SDA__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SDA__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SDA__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SDA__SLW CYREG_PRT12_SLW

/* M1_1 */
#define M1_1__0__INTTYPE CYREG_PICU0_INTTYPE1
#define M1_1__0__MASK 0x02u
#define M1_1__0__PC CYREG_PRT0_PC1
#define M1_1__0__PORT 0u
#define M1_1__0__SHIFT 1u
#define M1_1__AG CYREG_PRT0_AG
#define M1_1__AMUX CYREG_PRT0_AMUX
#define M1_1__BIE CYREG_PRT0_BIE
#define M1_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define M1_1__BYP CYREG_PRT0_BYP
#define M1_1__CTL CYREG_PRT0_CTL
#define M1_1__DM0 CYREG_PRT0_DM0
#define M1_1__DM1 CYREG_PRT0_DM1
#define M1_1__DM2 CYREG_PRT0_DM2
#define M1_1__DR CYREG_PRT0_DR
#define M1_1__INP_DIS CYREG_PRT0_INP_DIS
#define M1_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define M1_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define M1_1__LCD_EN CYREG_PRT0_LCD_EN
#define M1_1__MASK 0x02u
#define M1_1__PORT 0u
#define M1_1__PRT CYREG_PRT0_PRT
#define M1_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define M1_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define M1_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define M1_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define M1_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define M1_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define M1_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define M1_1__PS CYREG_PRT0_PS
#define M1_1__SHIFT 1u
#define M1_1__SLW CYREG_PRT0_SLW

/* M1_2 */
#define M1_2__0__INTTYPE CYREG_PICU0_INTTYPE2
#define M1_2__0__MASK 0x04u
#define M1_2__0__PC CYREG_PRT0_PC2
#define M1_2__0__PORT 0u
#define M1_2__0__SHIFT 2u
#define M1_2__AG CYREG_PRT0_AG
#define M1_2__AMUX CYREG_PRT0_AMUX
#define M1_2__BIE CYREG_PRT0_BIE
#define M1_2__BIT_MASK CYREG_PRT0_BIT_MASK
#define M1_2__BYP CYREG_PRT0_BYP
#define M1_2__CTL CYREG_PRT0_CTL
#define M1_2__DM0 CYREG_PRT0_DM0
#define M1_2__DM1 CYREG_PRT0_DM1
#define M1_2__DM2 CYREG_PRT0_DM2
#define M1_2__DR CYREG_PRT0_DR
#define M1_2__INP_DIS CYREG_PRT0_INP_DIS
#define M1_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define M1_2__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define M1_2__LCD_EN CYREG_PRT0_LCD_EN
#define M1_2__MASK 0x04u
#define M1_2__PORT 0u
#define M1_2__PRT CYREG_PRT0_PRT
#define M1_2__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define M1_2__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define M1_2__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define M1_2__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define M1_2__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define M1_2__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define M1_2__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define M1_2__PS CYREG_PRT0_PS
#define M1_2__SHIFT 2u
#define M1_2__SLW CYREG_PRT0_SLW

/* M2_1 */
#define M2_1__0__INTTYPE CYREG_PICU0_INTTYPE4
#define M2_1__0__MASK 0x10u
#define M2_1__0__PC CYREG_PRT0_PC4
#define M2_1__0__PORT 0u
#define M2_1__0__SHIFT 4u
#define M2_1__AG CYREG_PRT0_AG
#define M2_1__AMUX CYREG_PRT0_AMUX
#define M2_1__BIE CYREG_PRT0_BIE
#define M2_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define M2_1__BYP CYREG_PRT0_BYP
#define M2_1__CTL CYREG_PRT0_CTL
#define M2_1__DM0 CYREG_PRT0_DM0
#define M2_1__DM1 CYREG_PRT0_DM1
#define M2_1__DM2 CYREG_PRT0_DM2
#define M2_1__DR CYREG_PRT0_DR
#define M2_1__INP_DIS CYREG_PRT0_INP_DIS
#define M2_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define M2_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define M2_1__LCD_EN CYREG_PRT0_LCD_EN
#define M2_1__MASK 0x10u
#define M2_1__PORT 0u
#define M2_1__PRT CYREG_PRT0_PRT
#define M2_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define M2_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define M2_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define M2_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define M2_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define M2_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define M2_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define M2_1__PS CYREG_PRT0_PS
#define M2_1__SHIFT 4u
#define M2_1__SLW CYREG_PRT0_SLW

/* M2_2 */
#define M2_2__0__INTTYPE CYREG_PICU0_INTTYPE5
#define M2_2__0__MASK 0x20u
#define M2_2__0__PC CYREG_PRT0_PC5
#define M2_2__0__PORT 0u
#define M2_2__0__SHIFT 5u
#define M2_2__AG CYREG_PRT0_AG
#define M2_2__AMUX CYREG_PRT0_AMUX
#define M2_2__BIE CYREG_PRT0_BIE
#define M2_2__BIT_MASK CYREG_PRT0_BIT_MASK
#define M2_2__BYP CYREG_PRT0_BYP
#define M2_2__CTL CYREG_PRT0_CTL
#define M2_2__DM0 CYREG_PRT0_DM0
#define M2_2__DM1 CYREG_PRT0_DM1
#define M2_2__DM2 CYREG_PRT0_DM2
#define M2_2__DR CYREG_PRT0_DR
#define M2_2__INP_DIS CYREG_PRT0_INP_DIS
#define M2_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define M2_2__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define M2_2__LCD_EN CYREG_PRT0_LCD_EN
#define M2_2__MASK 0x20u
#define M2_2__PORT 0u
#define M2_2__PRT CYREG_PRT0_PRT
#define M2_2__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define M2_2__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define M2_2__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define M2_2__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define M2_2__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define M2_2__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define M2_2__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define M2_2__PS CYREG_PRT0_PS
#define M2_2__SHIFT 5u
#define M2_2__SLW CYREG_PRT0_SLW

/* UART */
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB04_05_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB04_05_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB04_05_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB04_05_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB04_05_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB04_05_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB04_05_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB04_05_MSK
#define UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB04_CTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB04_ST_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB04_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB04_ST_CTL
#define UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB04_MSK
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB04_05_ST
#define UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB04_MSK
#define UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB04_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB04_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB04_ST
#define UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB04_05_A0
#define UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB04_05_A1
#define UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB04_05_D0
#define UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB04_05_D1
#define UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB04_05_F0
#define UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB04_05_F1
#define UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB04_A0_A1
#define UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB04_A0
#define UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB04_A1
#define UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB04_D0_D1
#define UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB04_D0
#define UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB04_D1
#define UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB04_F0_F1
#define UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB04_F0
#define UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB04_F1
#define UART_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define UART_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB04_MSK_ACTL
#define UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB03_04_ACTL
#define UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB03_04_ST
#define UART_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_BUART_sRX_RxSts__3__POS 3
#define UART_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_BUART_sRX_RxSts__4__POS 4
#define UART_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_BUART_sRX_RxSts__5__POS 5
#define UART_BUART_sRX_RxSts__MASK 0x38u
#define UART_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB03_MSK
#define UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB03_ACTL
#define UART_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB03_ST
#define UART_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define UART_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define UART_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_IntClock__INDEX 0x00u
#define UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_IntClock__PM_ACT_MSK 0x01u
#define UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_IntClock__PM_STBY_MSK 0x01u

/* RXisr */
#define RXisr__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define RXisr__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define RXisr__INTC_MASK 0x02u
#define RXisr__INTC_NUMBER 1u
#define RXisr__INTC_PRIOR_NUM 7u
#define RXisr__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define RXisr__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define RXisr__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* MotorD */
#define MotorD__0__INTTYPE CYREG_PICU0_INTTYPE0
#define MotorD__0__MASK 0x01u
#define MotorD__0__PC CYREG_PRT0_PC0
#define MotorD__0__PORT 0u
#define MotorD__0__SHIFT 0u
#define MotorD__AG CYREG_PRT0_AG
#define MotorD__AMUX CYREG_PRT0_AMUX
#define MotorD__BIE CYREG_PRT0_BIE
#define MotorD__BIT_MASK CYREG_PRT0_BIT_MASK
#define MotorD__BYP CYREG_PRT0_BYP
#define MotorD__CTL CYREG_PRT0_CTL
#define MotorD__DM0 CYREG_PRT0_DM0
#define MotorD__DM1 CYREG_PRT0_DM1
#define MotorD__DM2 CYREG_PRT0_DM2
#define MotorD__DR CYREG_PRT0_DR
#define MotorD__INP_DIS CYREG_PRT0_INP_DIS
#define MotorD__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define MotorD__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define MotorD__LCD_EN CYREG_PRT0_LCD_EN
#define MotorD__MASK 0x01u
#define MotorD__PORT 0u
#define MotorD__PRT CYREG_PRT0_PRT
#define MotorD__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define MotorD__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define MotorD__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define MotorD__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define MotorD__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define MotorD__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define MotorD__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define MotorD__PS CYREG_PRT0_PS
#define MotorD__SHIFT 0u
#define MotorD__SLW CYREG_PRT0_SLW

/* MotorI */
#define MotorI__0__INTTYPE CYREG_PICU0_INTTYPE3
#define MotorI__0__MASK 0x08u
#define MotorI__0__PC CYREG_PRT0_PC3
#define MotorI__0__PORT 0u
#define MotorI__0__SHIFT 3u
#define MotorI__AG CYREG_PRT0_AG
#define MotorI__AMUX CYREG_PRT0_AMUX
#define MotorI__BIE CYREG_PRT0_BIE
#define MotorI__BIT_MASK CYREG_PRT0_BIT_MASK
#define MotorI__BYP CYREG_PRT0_BYP
#define MotorI__CTL CYREG_PRT0_CTL
#define MotorI__DM0 CYREG_PRT0_DM0
#define MotorI__DM1 CYREG_PRT0_DM1
#define MotorI__DM2 CYREG_PRT0_DM2
#define MotorI__DR CYREG_PRT0_DR
#define MotorI__INP_DIS CYREG_PRT0_INP_DIS
#define MotorI__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define MotorI__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define MotorI__LCD_EN CYREG_PRT0_LCD_EN
#define MotorI__MASK 0x08u
#define MotorI__PORT 0u
#define MotorI__PRT CYREG_PRT0_PRT
#define MotorI__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define MotorI__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define MotorI__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define MotorI__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define MotorI__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define MotorI__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define MotorI__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define MotorI__PS CYREG_PRT0_PS
#define MotorI__SHIFT 3u
#define MotorI__SLW CYREG_PRT0_SLW

/* PWMisr */
#define PWMisr__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define PWMisr__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define PWMisr__INTC_MASK 0x01u
#define PWMisr__INTC_NUMBER 0u
#define PWMisr__INTC_PRIOR_NUM 7u
#define PWMisr__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define PWMisr__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define PWMisr__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x01u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x02u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x02u

/* PWM_Motores */
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB02_03_CTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB02_03_CTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_B0_UDB02_03_MSK
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB02_03_MSK
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_B0_UDB02_CTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_B0_UDB02_ST_CTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_B0_UDB02_CTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_B0_UDB02_ST_CTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_Motores_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_B0_UDB02_MSK
#define PWM_Motores_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define PWM_Motores_PWMUDB_genblk8_stsreg__0__POS 0
#define PWM_Motores_PWMUDB_genblk8_stsreg__1__MASK 0x02u
#define PWM_Motores_PWMUDB_genblk8_stsreg__1__POS 1
#define PWM_Motores_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define PWM_Motores_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG CYREG_B0_UDB02_03_ST
#define PWM_Motores_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define PWM_Motores_PWMUDB_genblk8_stsreg__2__POS 2
#define PWM_Motores_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define PWM_Motores_PWMUDB_genblk8_stsreg__3__POS 3
#define PWM_Motores_PWMUDB_genblk8_stsreg__MASK 0x0Fu
#define PWM_Motores_PWMUDB_genblk8_stsreg__MASK_REG CYREG_B0_UDB02_MSK
#define PWM_Motores_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_Motores_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_Motores_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define PWM_Motores_PWMUDB_genblk8_stsreg__STATUS_CNT_REG CYREG_B0_UDB02_ST_CTL
#define PWM_Motores_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG CYREG_B0_UDB02_ST_CTL
#define PWM_Motores_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_B0_UDB02_ST
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG CYREG_B0_UDB02_03_A0
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG CYREG_B0_UDB02_03_A1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG CYREG_B0_UDB02_03_D0
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG CYREG_B0_UDB02_03_D1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG CYREG_B0_UDB02_03_F0
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG CYREG_B0_UDB02_03_F1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__A0_A1_REG CYREG_B0_UDB02_A0_A1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__A0_REG CYREG_B0_UDB02_A0
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__A1_REG CYREG_B0_UDB02_A1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__D0_D1_REG CYREG_B0_UDB02_D0_D1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__D0_REG CYREG_B0_UDB02_D0
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__D1_REG CYREG_B0_UDB02_D1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__F0_F1_REG CYREG_B0_UDB02_F0_F1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__F0_REG CYREG_B0_UDB02_F0
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__F1_REG CYREG_B0_UDB02_F1
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define PWM_Motores_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "RobotBluetoth"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00008003u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
