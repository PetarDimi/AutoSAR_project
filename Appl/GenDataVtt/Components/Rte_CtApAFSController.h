/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_CtApAFSController.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtApAFSController>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPAFSCONTROLLER_H
# define _RTE_CTAPAFSCONTROLLER_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtApAFSController_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_NOINIT) Rte_CpApAFSController_PpLightPositionLeft_DeLightLength; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_CpApAFSController_PpLightPositionRight_DeLightLength; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IdtDioValueType, RTE_VAR_NOINIT) Rte_CpSaAmbientLight_PpAmbientLightOut_DeAmbientLight; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_NOINIT) Rte_CpApBatteryManager_PpBateryMode_DeBateryMode; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IdtDioValueType, RTE_VAR_NOINIT) Rte_CpSaSpeedometer_PpSpeedometerValueOut_DeSpeedometerValue; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IdtDioValueType, RTE_VAR_NOINIT) Rte_CpSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_PpAmbientLight_DeAmbientLight (0U)
#  define Rte_InitValue_PpBateryMode_DeBateryMode (1)
#  define Rte_InitValue_PpLightPositionLeft_DeLightLength (0U)
#  define Rte_InitValue_PpLightPositionLeft_DeLightPosition (0)
#  define Rte_InitValue_PpLightPositionRight_DeLightLength (0U)
#  define Rte_InitValue_PpLightPositionRight_DeLightPosition (0)
#  define Rte_InitValue_PpSpeedometerValue_DeSpeedometerValue (0U)
#  define Rte_InitValue_PpSteeringWheelPosition_DeSteeringWheelPosition (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApAFSController_PpLightPositionLeft_DeLightPosition(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApAFSController_PpLightPositionRight_DeLightPosition(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_PpAmbientLight_DeAmbientLight Rte_Read_CtApAFSController_PpAmbientLight_DeAmbientLight
#  define Rte_Read_CtApAFSController_PpAmbientLight_DeAmbientLight(data) (*(data) = Rte_CpSaAmbientLight_PpAmbientLightOut_DeAmbientLight, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpBateryMode_DeBateryMode Rte_Read_CtApAFSController_PpBateryMode_DeBateryMode
#  define Rte_Read_CtApAFSController_PpBateryMode_DeBateryMode(data) (*(data) = Rte_CpApBatteryManager_PpBateryMode_DeBateryMode, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpSpeedometerValue_DeSpeedometerValue Rte_Read_CtApAFSController_PpSpeedometerValue_DeSpeedometerValue
#  define Rte_Read_CtApAFSController_PpSpeedometerValue_DeSpeedometerValue(data) (*(data) = Rte_CpSaSpeedometer_PpSpeedometerValueOut_DeSpeedometerValue, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpSteeringWheelPosition_DeSteeringWheelPosition Rte_Read_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition
#  define Rte_Read_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition(data) (*(data) = Rte_CpSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PpLightPositionLeft_DeLightLength Rte_Write_CtApAFSController_PpLightPositionLeft_DeLightLength
#  define Rte_Write_CtApAFSController_PpLightPositionLeft_DeLightLength(data) (Rte_CpApAFSController_PpLightPositionLeft_DeLightLength = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PpLightPositionLeft_DeLightPosition Rte_Write_CtApAFSController_PpLightPositionLeft_DeLightPosition
#  define Rte_Write_PpLightPositionRight_DeLightLength Rte_Write_CtApAFSController_PpLightPositionRight_DeLightLength
#  define Rte_Write_CtApAFSController_PpLightPositionRight_DeLightLength(data) (Rte_CpApAFSController_PpLightPositionRight_DeLightLength = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PpLightPositionRight_DeLightPosition Rte_Write_CtApAFSController_PpLightPositionRight_DeLightPosition


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CTCDDIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CTCDDIOHWAB_APPL_CODE) RCtCddIoHwAb_PpAFSSwitch_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CTCDDIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PpAFSSwitch_ReadChannel(arg1) (RCtCddIoHwAb_PpAFSSwitch_ReadChannel(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CTCDDIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CTCDDIOHWAB_APPL_CODE) RCtCddIoHwAb_PpHighBeam_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CTCDDIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PpHighBeam_ReadChannel(arg1) (RCtCddIoHwAb_PpHighBeam_ReadChannel(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CtApAFSController_START_SEC_CODE
# include "CtApAFSController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData
#  define RTE_RUNNABLE_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData
#  define RTE_RUNNABLE_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData
#  define RTE_RUNNABLE_RCtApAFSControllerLogic RCtApAFSControllerLogic
#  define RTE_RUNNABLE_RCtApAFSController_Init RCtApAFSController_Init
# endif

FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, CtApAFSController_CODE) RCtApAFSControllerLogic(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CtApAFSController_CODE) RCtApAFSController_Init(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CtApAFSController_STOP_SEC_CODE
# include "CtApAFSController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DataServices_Diag_RDI_BatteryValue_BatteryValue_E_NOT_OK (1U)

#  define RTE_E_DataServices_Diag_RDI_BatteryValue_BatteryValue_E_PENDING (10U)

#  define RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_NOT_OK (1U)

#  define RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_PENDING (10U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPAFSCONTROLLER_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
