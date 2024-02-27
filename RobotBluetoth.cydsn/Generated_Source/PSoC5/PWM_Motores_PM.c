/*******************************************************************************
* File Name: PWM_Motores_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_Motores.h"

static PWM_Motores_backupStruct PWM_Motores_backup;


/*******************************************************************************
* Function Name: PWM_Motores_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_Motores_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_Motores_SaveConfig(void) 
{

    #if(!PWM_Motores_UsingFixedFunction)
        #if(!PWM_Motores_PWMModeIsCenterAligned)
            PWM_Motores_backup.PWMPeriod = PWM_Motores_ReadPeriod();
        #endif /* (!PWM_Motores_PWMModeIsCenterAligned) */
        PWM_Motores_backup.PWMUdb = PWM_Motores_ReadCounter();
        #if (PWM_Motores_UseStatus)
            PWM_Motores_backup.InterruptMaskValue = PWM_Motores_STATUS_MASK;
        #endif /* (PWM_Motores_UseStatus) */

        #if(PWM_Motores_DeadBandMode == PWM_Motores__B_PWM__DBM_256_CLOCKS || \
            PWM_Motores_DeadBandMode == PWM_Motores__B_PWM__DBM_2_4_CLOCKS)
            PWM_Motores_backup.PWMdeadBandValue = PWM_Motores_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_Motores_KillModeMinTime)
             PWM_Motores_backup.PWMKillCounterPeriod = PWM_Motores_ReadKillTime();
        #endif /* (PWM_Motores_KillModeMinTime) */

        #if(PWM_Motores_UseControl)
            PWM_Motores_backup.PWMControlRegister = PWM_Motores_ReadControlRegister();
        #endif /* (PWM_Motores_UseControl) */
    #endif  /* (!PWM_Motores_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_Motores_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_Motores_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_Motores_RestoreConfig(void) 
{
        #if(!PWM_Motores_UsingFixedFunction)
            #if(!PWM_Motores_PWMModeIsCenterAligned)
                PWM_Motores_WritePeriod(PWM_Motores_backup.PWMPeriod);
            #endif /* (!PWM_Motores_PWMModeIsCenterAligned) */

            PWM_Motores_WriteCounter(PWM_Motores_backup.PWMUdb);

            #if (PWM_Motores_UseStatus)
                PWM_Motores_STATUS_MASK = PWM_Motores_backup.InterruptMaskValue;
            #endif /* (PWM_Motores_UseStatus) */

            #if(PWM_Motores_DeadBandMode == PWM_Motores__B_PWM__DBM_256_CLOCKS || \
                PWM_Motores_DeadBandMode == PWM_Motores__B_PWM__DBM_2_4_CLOCKS)
                PWM_Motores_WriteDeadTime(PWM_Motores_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_Motores_KillModeMinTime)
                PWM_Motores_WriteKillTime(PWM_Motores_backup.PWMKillCounterPeriod);
            #endif /* (PWM_Motores_KillModeMinTime) */

            #if(PWM_Motores_UseControl)
                PWM_Motores_WriteControlRegister(PWM_Motores_backup.PWMControlRegister);
            #endif /* (PWM_Motores_UseControl) */
        #endif  /* (!PWM_Motores_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_Motores_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_Motores_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_Motores_Sleep(void) 
{
    #if(PWM_Motores_UseControl)
        if(PWM_Motores_CTRL_ENABLE == (PWM_Motores_CONTROL & PWM_Motores_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_Motores_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_Motores_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_Motores_UseControl) */

    /* Stop component */
    PWM_Motores_Stop();

    /* Save registers configuration */
    PWM_Motores_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_Motores_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_Motores_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_Motores_Wakeup(void) 
{
     /* Restore registers values */
    PWM_Motores_RestoreConfig();

    if(PWM_Motores_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_Motores_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
