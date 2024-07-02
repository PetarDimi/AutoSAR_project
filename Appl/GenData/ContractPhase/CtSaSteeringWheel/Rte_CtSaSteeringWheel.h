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
 *        Config:  C:/nit-au-03/PSZR_dimitrijevic_lazarevic/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtSaSteeringWheel
 *  Generated at:  Sun Mar 12 17:04:27 2023
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaSteeringWheel> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSASTEERINGWHEEL_H
# define _RTE_CTSASTEERINGWHEEL_H

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

# include "Rte_CtSaSteeringWheel_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtSaSteeringWheel
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtSaSteeringWheel, RTE_CONST, RTE_CONST) Rte_Inst_CtSaSteeringWheel; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtSaSteeringWheel, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpSteeringWheelPositionIn_DeSteeringWheelPosition (0U)
# define Rte_InitValue_PpSteeringWheelPositionOut_DeSteeringWheelPosition (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTSASTEERINGWHEEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition(IdtDioValueType data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpSteeringWheelPositionIn_DeSteeringWheelPosition Rte_Read_CtSaSteeringWheel_PpSteeringWheelPositionIn_DeSteeringWheelPosition


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpSteeringWheelPositionOut_DeSteeringWheelPosition Rte_Write_CtSaSteeringWheel_PpSteeringWheelPositionOut_DeSteeringWheelPosition




# define CtSaSteeringWheel_START_SEC_CODE
# include "CtSaSteeringWheel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtSaSteeringWheelGetPosition
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpSteeringWheelPositionIn_DeSteeringWheelPosition(IdtDioValueType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpSteeringWheelPositionOut_DeSteeringWheelPosition(IdtDioValueType data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtSaSteeringWheelGetPosition RCtSaSteeringWheelGetPosition
FUNC(void, CtSaSteeringWheel_CODE) RCtSaSteeringWheelGetPosition(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtSaSteeringWheel_STOP_SEC_CODE
# include "CtSaSteeringWheel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSASTEERINGWHEEL_H */
