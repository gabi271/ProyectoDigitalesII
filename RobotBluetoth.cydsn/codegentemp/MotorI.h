/*******************************************************************************
* File Name: MotorI.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MotorI_H) /* Pins MotorI_H */
#define CY_PINS_MotorI_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MotorI_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MotorI__PORT == 15 && ((MotorI__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MotorI_Write(uint8 value);
void    MotorI_SetDriveMode(uint8 mode);
uint8   MotorI_ReadDataReg(void);
uint8   MotorI_Read(void);
void    MotorI_SetInterruptMode(uint16 position, uint16 mode);
uint8   MotorI_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MotorI_SetDriveMode() function.
     *  @{
     */
        #define MotorI_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MotorI_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MotorI_DM_RES_UP          PIN_DM_RES_UP
        #define MotorI_DM_RES_DWN         PIN_DM_RES_DWN
        #define MotorI_DM_OD_LO           PIN_DM_OD_LO
        #define MotorI_DM_OD_HI           PIN_DM_OD_HI
        #define MotorI_DM_STRONG          PIN_DM_STRONG
        #define MotorI_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MotorI_MASK               MotorI__MASK
#define MotorI_SHIFT              MotorI__SHIFT
#define MotorI_WIDTH              1u

/* Interrupt constants */
#if defined(MotorI__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MotorI_SetInterruptMode() function.
     *  @{
     */
        #define MotorI_INTR_NONE      (uint16)(0x0000u)
        #define MotorI_INTR_RISING    (uint16)(0x0001u)
        #define MotorI_INTR_FALLING   (uint16)(0x0002u)
        #define MotorI_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MotorI_INTR_MASK      (0x01u) 
#endif /* (MotorI__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MotorI_PS                     (* (reg8 *) MotorI__PS)
/* Data Register */
#define MotorI_DR                     (* (reg8 *) MotorI__DR)
/* Port Number */
#define MotorI_PRT_NUM                (* (reg8 *) MotorI__PRT) 
/* Connect to Analog Globals */                                                  
#define MotorI_AG                     (* (reg8 *) MotorI__AG)                       
/* Analog MUX bux enable */
#define MotorI_AMUX                   (* (reg8 *) MotorI__AMUX) 
/* Bidirectional Enable */                                                        
#define MotorI_BIE                    (* (reg8 *) MotorI__BIE)
/* Bit-mask for Aliased Register Access */
#define MotorI_BIT_MASK               (* (reg8 *) MotorI__BIT_MASK)
/* Bypass Enable */
#define MotorI_BYP                    (* (reg8 *) MotorI__BYP)
/* Port wide control signals */                                                   
#define MotorI_CTL                    (* (reg8 *) MotorI__CTL)
/* Drive Modes */
#define MotorI_DM0                    (* (reg8 *) MotorI__DM0) 
#define MotorI_DM1                    (* (reg8 *) MotorI__DM1)
#define MotorI_DM2                    (* (reg8 *) MotorI__DM2) 
/* Input Buffer Disable Override */
#define MotorI_INP_DIS                (* (reg8 *) MotorI__INP_DIS)
/* LCD Common or Segment Drive */
#define MotorI_LCD_COM_SEG            (* (reg8 *) MotorI__LCD_COM_SEG)
/* Enable Segment LCD */
#define MotorI_LCD_EN                 (* (reg8 *) MotorI__LCD_EN)
/* Slew Rate Control */
#define MotorI_SLW                    (* (reg8 *) MotorI__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MotorI_PRTDSI__CAPS_SEL       (* (reg8 *) MotorI__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MotorI_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MotorI__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MotorI_PRTDSI__OE_SEL0        (* (reg8 *) MotorI__PRTDSI__OE_SEL0) 
#define MotorI_PRTDSI__OE_SEL1        (* (reg8 *) MotorI__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MotorI_PRTDSI__OUT_SEL0       (* (reg8 *) MotorI__PRTDSI__OUT_SEL0) 
#define MotorI_PRTDSI__OUT_SEL1       (* (reg8 *) MotorI__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MotorI_PRTDSI__SYNC_OUT       (* (reg8 *) MotorI__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MotorI__SIO_CFG)
    #define MotorI_SIO_HYST_EN        (* (reg8 *) MotorI__SIO_HYST_EN)
    #define MotorI_SIO_REG_HIFREQ     (* (reg8 *) MotorI__SIO_REG_HIFREQ)
    #define MotorI_SIO_CFG            (* (reg8 *) MotorI__SIO_CFG)
    #define MotorI_SIO_DIFF           (* (reg8 *) MotorI__SIO_DIFF)
#endif /* (MotorI__SIO_CFG) */

/* Interrupt Registers */
#if defined(MotorI__INTSTAT)
    #define MotorI_INTSTAT            (* (reg8 *) MotorI__INTSTAT)
    #define MotorI_SNAP               (* (reg8 *) MotorI__SNAP)
    
	#define MotorI_0_INTTYPE_REG 		(* (reg8 *) MotorI__0__INTTYPE)
#endif /* (MotorI__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MotorI_H */


/* [] END OF FILE */
