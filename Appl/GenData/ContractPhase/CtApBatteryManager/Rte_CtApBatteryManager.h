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
 *          File:  Rte_CtApBatteryManager.h
 *        Config:  C:/nit-au-03/PSZR_dimitrijevic_lazarevic/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtApBatteryManager
 *  Generated at:  Sun Mar 12 17:04:22 2023
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtApBatteryManager> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPBATTERYMANAGER_H
# define _RTE_CTAPBATTERYMANAGER_H

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

# include "Rte_CtApBatteryManager_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtApBatteryManager
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtApBatteryManager, RTE_CONST, RTE_CONST) Rte_Inst_CtApBatteryManager; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtApBatteryManager, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpBateryMode_DeBateryMode (1)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApBatteryManager_PpBateryMode_DeBateryMode(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_CtApBatteryManager_PpBswMBatteryMode_BswM_MDGP_MdgBswMBatteryMode(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApBatteryManager_PpBatterySlider_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTAPBATTERYMANAGER_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApBatteryManager_PpComMUserRequestCtApBatteryManager_RequestComMode(ComM_ModeType ComMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpBateryMode_DeBateryMode Rte_Write_CtApBatteryManager_PpBateryMode_DeBateryMode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Switch_PpBswMBatteryMode_BswM_MDGP_MdgBswMBatteryMode Rte_Switch_CtApBatteryManager_PpBswMBatteryMode_BswM_MDGP_MdgBswMBatteryMode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_PpBatterySlider_ReadChannel Rte_Call_CtApBatteryManager_PpBatterySlider_ReadChannel
# define Rte_Call_PpComMUserRequestCtApBatteryManager_RequestComMode Rte_Call_CtApBatteryManager_PpComMUserRequestCtApBatteryManager_RequestComMode




# define CtApBatteryManager_START_SEC_CODE
# include "CtApBatteryManager_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCpApBatteryManager
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpBateryMode_DeBateryMode(sint8 data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_PpBswMBatteryMode_BswM_MDGP_MdgBswMBatteryMode(uint8 mode)
 *   Modes of Rte_ModeType_MdgBswMBatteryMode:
 *   - RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_HIGH
 *   - RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_LOW
 *   - RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_MEDIUM
 *   - RTE_TRANSITION_MdgBswMBatteryMode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpBatterySlider_ReadChannel(uint8 *value)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PpComMUserRequestCtApBatteryManager_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCpApBatteryManager RCpApBatteryManager
FUNC(void, CtApBatteryManager_CODE) RCpApBatteryManager(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApBatteryManagerComM_ModeChange_FULL_COMM_Entry
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <COMM_FULL_COMMUNICATION> of ModeDeclarationGroupPrototype <currentMode> of PortPrototype <PpComMCurrentModeCtApBatteryManager>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpBateryMode_DeBateryMode(sint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApBatteryManagerComM_ModeChange_FULL_COMM_Entry RCtApBatteryManagerComM_ModeChange_FULL_COMM_Entry
FUNC(void, CtApBatteryManager_CODE) RCtApBatteryManagerComM_ModeChange_FULL_COMM_Entry(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApBatteryManagerComM_ModeChange_FULL_COMM_Exit
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <COMM_NO_COMMUNICATION> of ModeDeclarationGroupPrototype <currentMode> of PortPrototype <PpComMCurrentModeCtApBatteryManager>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpBateryMode_DeBateryMode(sint8 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApBatteryManagerComM_ModeChange_FULL_COMM_Exit RCtApBatteryManagerComM_ModeChange_FULL_COMM_Exit
FUNC(void, CtApBatteryManager_CODE) RCtApBatteryManagerComM_ModeChange_FULL_COMM_Exit(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtApBatteryManager_STOP_SEC_CODE
# include "CtApBatteryManager_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_ComM_UserRequest_E_MODE_LIMITATION (2U)

# define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPBATTERYMANAGER_H */
