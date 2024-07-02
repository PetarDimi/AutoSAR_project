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
 *          File:  Rte_CtSaHeadlight.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaHeadlight>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSAHEADLIGHT_H
# define _RTE_CTSAHEADLIGHT_H

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

# ifndef RTE_CORE
#  define RTE_MULTI_INST_API
# endif

/* include files */

# include "Rte_CtSaHeadlight_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE
typedef P2CONST(struct Rte_CDS_CtSaHeadlight, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_PpLightPositionIn_DeLightLength (0U)
#  define Rte_InitValue_PpLightPositionIn_DeLightPosition (0)
#  define Rte_InitValue_PpLightPositionOut_DeLightLength (0U)
#  define Rte_InitValue_PpLightPositionOut_DeLightPosition (0)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_PpLightPositionIn_DeLightLength(self, data) ((self)->PpLightPositionIn.Read_DeLightLength(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpLightPositionIn_DeLightPosition(self, data) ((self)->PpLightPositionIn.Read_DeLightPosition(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PpLightPositionOut_DeLightLength(self, data) ((self)->PpLightPositionOut.Write_DeLightLength(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PpLightPositionOut_DeLightPosition(self, data) ((self)->PpLightPositionOut.Write_DeLightPosition(data)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CtSaHeadlight_START_SEC_CODE
# include "CtSaHeadlight_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RCtSaHeadlight RCtSaHeadlight
# endif

FUNC(void, CtSaHeadlight_CODE) RCtSaHeadlight(P2CONST(struct Rte_CDS_CtSaHeadlight, AUTOMATIC, RTE_CONST) self); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CtSaHeadlight_STOP_SEC_CODE
# include "CtSaHeadlight_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSAHEADLIGHT_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
