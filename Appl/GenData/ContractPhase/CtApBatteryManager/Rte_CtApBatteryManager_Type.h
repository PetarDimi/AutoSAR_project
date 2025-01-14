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
 *          File:  Rte_CtApBatteryManager_Type.h
 *        Config:  C:/nit-au-03/PSZR_dimitrijevic_lazarevic/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtApBatteryManager
 *  Generated at:  Sun Mar 12 17:04:22 2023
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application types header file for SW-C <CtApBatteryManager> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPBATTERYMANAGER_TYPE_H
# define _RTE_CTAPBATTERYMANAGER_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

# ifndef COMM_NO_COMMUNICATION
#  define COMM_NO_COMMUNICATION (0U)
# endif

# ifndef COMM_SILENT_COMMUNICATION
#  define COMM_SILENT_COMMUNICATION (1U)
# endif

# ifndef COMM_FULL_COMMUNICATION
#  define COMM_FULL_COMMUNICATION (2U)
# endif



/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_ComMMode
#  define RTE_MODETYPE_ComMMode
typedef uint8 Rte_ModeType_ComMMode;
# endif
# ifndef RTE_MODETYPE_MdgBswMBatteryMode
#  define RTE_MODETYPE_MdgBswMBatteryMode
typedef uint8 Rte_ModeType_MdgBswMBatteryMode;
# endif

# ifndef RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION
#  define RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION (0U)
# endif
# ifndef RTE_MODE_ComMMode_COMM_NO_COMMUNICATION
#  define RTE_MODE_ComMMode_COMM_NO_COMMUNICATION (1U)
# endif
# ifndef RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION
#  define RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION (2U)
# endif
# ifndef RTE_TRANSITION_ComMMode
#  define RTE_TRANSITION_ComMMode (3U)
# endif

# ifndef RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_HIGH
#  define RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_HIGH (0U)
# endif
# ifndef RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_LOW
#  define RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_LOW (1U)
# endif
# ifndef RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_MEDIUM
#  define RTE_MODE_MdgBswMBatteryMode_BSWM_BATTERY_MEDIUM (2U)
# endif
# ifndef RTE_TRANSITION_MdgBswMBatteryMode
#  define RTE_TRANSITION_MdgBswMBatteryMode (3U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPBATTERYMANAGER_TYPE_H */
