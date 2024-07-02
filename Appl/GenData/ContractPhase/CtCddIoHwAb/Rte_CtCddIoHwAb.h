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
 *          File:  Rte_CtCddIoHwAb.h
 *        Config:  C:/nit-au-03/PSZR_dimitrijevic_lazarevic/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtCddIoHwAb
 *  Generated at:  Sun Mar 12 17:04:23 2023
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtCddIoHwAb> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTCDDIOHWAB_H
# define _RTE_CTCDDIOHWAB_H

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

# include "Rte_CtCddIoHwAb_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtCddIoHwAb
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtCddIoHwAb, RTE_CONST, RTE_CONST) Rte_Inst_CtCddIoHwAb; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtCddIoHwAb, TYPEDEF, RTE_CONST) Rte_Instance;


# define CtCddIoHwAb_START_SEC_CODE
# include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpAFSSwitch_ReadChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpAFSSwitch>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpAFSSwitch_ReadChannel(uint8 *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpAFSSwitch_ReadChannel RCtCddIoHwAb_PpAFSSwitch_ReadChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpAFSSwitch_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpBatterySlider_ReadChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpBatterySlider>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpBatterySlider_ReadChannel(uint8 *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpBatterySlider_ReadChannel RCtCddIoHwAb_PpBatterySlider_ReadChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpBatterySlider_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpHighBeam_ReadChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpHighBeam>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpHighBeam_ReadChannel(uint8 *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpHighBeam_ReadChannel RCtCddIoHwAb_PpHighBeam_ReadChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpHighBeam_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtCddIoHwAb_STOP_SEC_CODE
# include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTCDDIOHWAB_H */
