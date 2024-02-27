/*******************************************************************************
* File Name: MotorD.h  
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

#if !defined(CY_PINS_MotorD_H) /* Pins MotorD_H */
#define CY_PINS_MotorD_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MotorD_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MotorD__PORT == 15 && ((MotorD__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MotorD_Write(uint8 value);
void    MotorD_SetDriveMode(uint8 mode);
uint8   MotorD_ReadDataReg(void);
uint8   MotorD_Read(void);
void    MotorD_SetInterruptMode(uint16 position, uint16 mode);
uint8   MotorD_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MotorD_SetDriveMode() function.
     *  @{
     */
        #define MotorD_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MotorD_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MotorD_DM_RES_UP          PIN_DM_RES_UP
        #define MotorD_DM_RES_DWN         PIN_DM_RES_DWN
        #define MotorD_DM_OD_LO           PIN_DM_OD_LO
        #define MotorD_DM_OD_HI           PIN_DM_OD_HI
        #define MotorD_DM_STRONG          PIN_DM_STRONG
        #define MotorD_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MotorD_MASK               MotorD__MASK
#define MotorD_SHIFT              MotorD__SHIFT
#define MotorD_WIDTH              1u

/* Interrupt constants */
#if defined(MotorD__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MotorD_SetInterruptMode() function.
     *  @{
     */
        #define MotorD_INTR_NONE      (uint16)(0x0000u)
        #define MotorD_INTR_RISING    (uint16)(0x0001u)
        #define MotorD_INTR_FALLING   (uint16)(0x0002u)
        #define MotorD_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MotorD_INTR_MASK      (0x01u) 
#endif /* (MotorD__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MotorD_PS                     (* (reg8 *) MotorD__PS)
/* Data Register */
#define MotorD_DR                     (* (reg8 *) MotorD__DR)
/* Port Number */
#define MotorD_PRT_NUM                (* (reg8 *) MotorD__PRT) 
/* Connect to Analog Globals */                                                  
#define MotorD_AG                     (* (reg8 *) MotorD__AG)                       
/* Analog MUX bux enable */
#define MotorD_AMUX                   (* (reg8 *) MotorD__AMUX) 
/* Bidirectional Enable */                                                        
#define MotorD_BIE                    (* (reg8 *) MotorD__BIE)
/* Bit-mask for Aliased Register Access */
#define MotorD_BIT_MASK               (* (reg8 *) MotorD__BIT_MASK)
/* Bypass Enable */
#define MotorD_BYP                    (* (reg8 *) MotorD__BYP)
/* Port wide control signals */                                                   
#define MotorD_CTL                    (* (reg8 *) MotorD__CTL)
/* Drive Modes */
#define MotorD_DM0                    (* (reg8 *) MotorD__DM0) 
#define MotorD_DM1                    (* (reg8 *) MotorD__DM1)
#define MotorD_DM2                    (* (reg8 *) MotorD__DM2) 
/* Input Buffer Disable Override */
#define MotorD_INP_DIS                (* (reg8 *) MotorD__INP_DIS)
/* LCD Common or Segment Drive */
#define MotorD_LCD_COM_SEG            (* (reg8 *) MotorD__LCD_COM_SEG)
/* Enable Segment LCD */
#define MotorD_LCD_EN                 (* (reg8 *) MotorD__LCD_EN)
/* Slew Rate Control */
#define MotorD_SLW                    (* (reg8 *) MotorD__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MotorD_PRTDSI__CAPS_SEL       (* (reg8 *) MotorD__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MotorD_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MotorD__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MotorD_PRTDSI__OE_SEL0        (* (reg8 *) MotorD__PRTDSI__OE_SEL0) 
#define MotorD_PRTDSI__OE_SEL1        (* (reg8 *) MotorD__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MotorD_PRTDSI__OUT_SEL0       (* (reg8 *) MotorD__PRTDSI__OUT_SEL0) 
#define MotorD_PRTDSI__OUT_SEL1       (* (reg8 *) MotorD__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MotorD_PRTDSI__SYNC_OUT       (* (reg8 *) MotorD__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MotorD__SIO_CFG)
    #define MotorD_SIO_HYST_EN        (* (reg8 *) MotorD__SIO_HYST_EN)
    #define MotorD_SIO_REG_HIFREQ     (* (reg8 *) MotorD__SIO_REG_HIFREQ)
    #define MotorD_SIO_CFG            (* (reg8 *) MotorD__SIO_CFG)
    #define MotorD_SIO_DIFF           (* (reg8 *) MotorD__SIO_DIFF)
#endif /* (MotorD__SIO_CFG) */

/* Interrupt Registers */
#if defined(MotorD__INTSTAT)
    #define MotorD_INTSTAT            (* (reg8 *) MotorD__INTSTAT)
    #define MotorD_SNAP               (* (reg8 *) MotorD__SNAP)
    
	#define MotorD_0_INTTYPE_REG 		(* (reg8 *) MotorD__0__INTTYPE)
#endif /* (MotorD__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MotorD_H */


/* [] END OF FILE */
