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
 *          File:  Rte_CtSaSteeringWheel.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaSteeringWheel>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSASTEERINGWHEEL_H
# define _RTE_CTSASTEERINGWHEEL_H

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

# include "Rte_CtSaSteeringWheel_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_PpSteeringWheelPositionIn_DeSteeringWheelPosition (0U)
#  define Rte_InitValue_PpSteeringWheelPositionOut_DeSteeringWheelPosition (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition(IdtDioValueType data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_PpSteeringWheelPositionIn_DeSteeringWheelPosition Rte_Read_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition
#  define Rte_Read_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_sig_SteeringWheelPosition_In, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PpSteeringWheelPositionOut_DeSteeringWheelPosition Rte_Write_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition


# endif /* !defined(RTE_CORE) */


# define CtSaSteeringWheel_START_SEC_CODE
# include "CtSaSteeringWheel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RCtSaSteeringWheelGetPosition RCtSaSteeringWheelGetPosition
# endif

FUNC(void, CtSaSteeringWheel_CODE) RCtSaSteeringWheelGetPosition(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CtSaSteeringWheel_STOP_SEC_CODE
# include "CtSaSteeringWheel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSASTEERINGWHEEL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
