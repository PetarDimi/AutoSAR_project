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
 *        Config:  C:/nit-au-03/PSZR_dimitrijevic_lazarevic/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtApAFSController
 *  Generated at:  Sun Mar 12 17:04:22 2023
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtApAFSController> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPAFSCONTROLLER_H
# define _RTE_CTAPAFSCONTROLLER_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtApAFSController_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtApAFSController
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtApAFSController, RTE_CONST, RTE_CONST) Rte_Inst_CtApAFSController; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtApAFSController, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpAmbientLight_DeAmbientLight (0U)
# define Rte_InitValue_PpBateryMode_DeBateryMode (1)
# define Rte_InitValue_PpLightPositionLeft_DeLightLength (0U)
# define Rte_InitValue_PpLightPositionLeft_DeLightPosition (0)
# define Rte_InitValue_PpLightPositionRight_DeLightLength (0U)
# define Rte_InitValue_PpLightPositionRight_DeLightPosition (0)
# define Rte_InitValue_PpSpeedometerValue_DeSpeedometerValue (0U)
# define Rte_InitValue_PpSteeringWheelPosition_DeSteeringWheelPosition (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApAFSController_PpAmbientLight_DeAmbientLight(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApAFSController_PpBateryMode_DeBateryMode(P2VAR(sint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApAFSController_PpSpeedometerValue_DeSpeedometerValue(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApAFSController_PpLightPositionLeft_DeLightLength(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApAFSController_PpLightPositionLeft_DeLightPosition(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApAFSController_PpLightPositionRight_DeLightLength(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApAFSController_PpLightPositionRight_DeLightPosition(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApAFSController_PpAFSSwitch_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApAFSController_PpHighBeam_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpAmbientLight_DeAmbientLight Rte_Read_CtApAFSController_PpAmbientLight_DeAmbientLight
# define Rte_Read_PpBateryMode_DeBateryMode Rte_Read_CtApAFSController_PpBateryMode_DeBateryMode
# define Rte_Read_PpSpeedometerValue_DeSpeedometerValue Rte_Read_CtApAFSController_PpSpeedometerValue_DeSpeedometerValue
# define Rte_Read_PpSteeringWheelPosition_DeSteeringWheelPosition Rte_Read_CtApAFSController_PpSteeringWheelPosition_DeSteeringWheelPosition


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpLightPositionLeft_DeLightLength Rte_Write_CtApAFSController_PpLightPositionLeft_DeLightLength
# define Rte_Write_PpLightPositionLeft_DeLightPosition Rte_Write_CtApAFSController_PpLightPositionLeft_DeLightPosition
# define Rte_Write_PpLightPositionRight_DeLightLength Rte_Write_CtApAFSController_PpLightPositionRight_DeLightLength
# define Rte_Write_PpLightPositionRight_DeLightPosition Rte_Write_CtApAFSController_PpLightPositionRight_DeLightPosition


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_PpAFSSwitch_ReadChannel Rte_Call_CtApAFSController_PpAFSSwitch_ReadChannel
# define Rte_Call_PpHighBeam_ReadChannel Rte_Call_CtApAFSController_PpHighBeam_ReadChannel




# define CtApAFSController_START_SEC_CODE
# include "CtApAFSController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Diag_RDI_BatteryValue_BatteryValue>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Diag_RDI_BatteryValue_BatteryValue_E_NOT_OK
 *   RTE_E_DataServices_Diag_RDI_BatteryValue_BatteryValue_E_PENDING
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RDI_BatteryValue_BatteryValue_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Diag_RDI_BatteryValue_BatteryValue>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Diag_RDI_BatteryValue_BatteryValue_E_NOT_OK
 *   RTE_E_DataServices_Diag_RDI_BatteryValue_BatteryValue_E_PENDING
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RDI_BatteryValue_BatteryValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_NOT_OK
 *   RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_PENDING
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_NOT_OK
 *   RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_PENDING
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_NOT_OK
 *   RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_PENDING
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CtApAFSController_CODE) DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPAFSCONTROLLER_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApAFSControllerLogic
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeAmbientLight> of PortPrototype <PpAmbientLight>
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeBateryMode> of PortPrototype <PpBateryMode>
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeSpeedometerValue> of PortPrototype <PpSpeedometerValue>
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeSteeringWheelPosition> of PortPrototype <PpSteeringWheelPosition>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpAmbientLight_DeAmbientLight(IdtDioValueType *data)
 *   Std_ReturnType Rte_Read_PpBateryMode_DeBateryMode(sint8 *data)
 *   Std_ReturnType Rte_Read_PpSpeedometerValue_DeSpeedometerValue(IdtDioValueType *data)
 *   Std_ReturnType Rte_Read_PpSteeringWheelPosition_DeSteeringWheelPosition(IdtDioValueType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpLightPositionLeft_DeLightLength(uint8 data)
 *   Std_ReturnType Rte_Write_PpLightPositionLeft_DeLightPosition(sint8 data)
 *   Std_ReturnType Rte_Write_PpLightPositionRight_DeLightLength(uint8 data)
 *   Std_ReturnType Rte_Write_PpLightPositionRight_DeLightPosition(sint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpAFSSwitch_ReadChannel(uint8 *value)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PpHighBeam_ReadChannel(uint8 *value)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApAFSControllerLogic RCtApAFSControllerLogic
FUNC(void, CtApAFSController_CODE) RCtApAFSControllerLogic(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApAFSController_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApAFSController_Init RCtApAFSController_Init
FUNC(void, CtApAFSController_CODE) RCtApAFSController_Init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtApAFSController_STOP_SEC_CODE
# include "CtApAFSController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DataServices_Diag_RDI_BatteryValue_BatteryValue_E_NOT_OK (1U)

# define RTE_E_DataServices_Diag_RDI_BatteryValue_BatteryValue_E_PENDING (10U)

# define RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_NOT_OK (1U)

# define RTE_E_DataServices_Diag_RWDI_PassingLane_PassingLane_PassingLane_E_PENDING (10U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPAFSCONTROLLER_H */
