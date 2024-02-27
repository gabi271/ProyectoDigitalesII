/*******************************************************************************
* File Name: PWMisr.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_PWMisr_H)
#define CY_ISR_PWMisr_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void PWMisr_Start(void);
void PWMisr_StartEx(cyisraddress address);
void PWMisr_Stop(void);

CY_ISR_PROTO(PWMisr_Interrupt);

void PWMisr_SetVector(cyisraddress address);
cyisraddress PWMisr_GetVector(void);

void PWMisr_SetPriority(uint8 priority);
uint8 PWMisr_GetPriority(void);

void PWMisr_Enable(void);
uint8 PWMisr_GetState(void);
void PWMisr_Disable(void);

void PWMisr_SetPending(void);
void PWMisr_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the PWMisr ISR. */
#define PWMisr_INTC_VECTOR            ((reg32 *) PWMisr__INTC_VECT)

/* Address of the PWMisr ISR priority. */
#define PWMisr_INTC_PRIOR             ((reg8 *) PWMisr__INTC_PRIOR_REG)

/* Priority of the PWMisr interrupt. */
#define PWMisr_INTC_PRIOR_NUMBER      PWMisr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable PWMisr interrupt. */
#define PWMisr_INTC_SET_EN            ((reg32 *) PWMisr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the PWMisr interrupt. */
#define PWMisr_INTC_CLR_EN            ((reg32 *) PWMisr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the PWMisr interrupt state to pending. */
#define PWMisr_INTC_SET_PD            ((reg32 *) PWMisr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the PWMisr interrupt. */
#define PWMisr_INTC_CLR_PD            ((reg32 *) PWMisr__INTC_CLR_PD_REG)


#endif /* CY_ISR_PWMisr_H */


/* [] END OF FILE */
