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
 *          File:  Rte_BswM_Type.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application types header file for SW-C <BswM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BSWM_TYPE_H
# define _RTE_BSWM_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef STARTUP
#   define STARTUP (0U)
#  endif

#  ifndef RUN
#   define RUN (1U)
#  endif

#  ifndef POSTRUN
#   define POSTRUN (2U)
#  endif

#  ifndef WAKEUP
#   define WAKEUP (3U)
#  endif

#  ifndef SHUTDOWN
#   define SHUTDOWN (4U)
#  endif

#  ifndef RELEASED
#   define RELEASED (0U)
#  endif

#  ifndef REQUESTED
#   define REQUESTED (1U)
#  endif

#  ifndef BSWM_BATTERY_LOW
#   define BSWM_BATTERY_LOW (0U)
#  endif

#  ifndef BSWM_BATTERY_MEDIUM
#   define BSWM_BATTERY_MEDIUM (1U)
#  endif

#  ifndef BSWM_BATTERY_HIGH
#   define BSWM_BATTERY_HIGH (2U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_ESH_Mode
#  define RTE_MODETYPE_ESH_Mode
typedef uint8 Rte_ModeType_ESH_Mode;
# endif
# ifndef RTE_MODETYPE_MdgBswMBatteryMode
#  define RTE_MODETYPE_MdgBswMBatteryMode
typedef uint8 Rte_ModeType_MdgBswMBatteryMode;
# endif

# ifndef RTE_MODE_ESH_Mode_POSTRUN
#  define RTE_MODE_ESH_Mode_POSTRUN (0U)
# endif
# ifndef RTE_MODE_ESH_Mode_RUN
#  define RTE_MODE_ESH_Mode_RUN (1U)
# endif
# ifndef RTE_MODE_ESH_Mode_SHUTDOWN
#  define RTE_MODE_ESH_Mode_SHUTDOWN (2U)
# endif
# ifndef RTE_MODE_ESH_Mode_STARTUP
#  define RTE_MODE_ESH_Mode_STARTUP (3U)
# endif
# ifndef RTE_MODE_ESH_Mode_WAKEUP
#  define RTE_MODE_ESH_Mode_WAKEUP (4U)
# endif
# ifndef RTE_TRANSITION_ESH_Mode
#  define RTE_TRANSITION_ESH_Mode (5U)
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

#endif /* _RTE_BSWM_TYPE_H */
