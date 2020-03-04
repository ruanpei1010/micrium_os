/***************************************************************************//**
 * @file
 * @brief Network Ndp Layer - (Neighbor Discovery Protocol)
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.
 * The software is governed by the sections of the MSLA applicable to Micrium
 * Software.
 *
 ******************************************************************************/

/****************************************************************************************************//**
 * @defgroup NET_CORE_NDP NDP API
 * @ingroup  NET_CORE
 * @brief    NDP API
 *
 * @addtogroup NET_CORE_NDP
 * @{
 ********************************************************************************************************
 * @note     (1) Supports Neighbor Discovery Protocol as described in RFC #2461 with the
 *               following restrictions/constraints :
 *             - (a) ONLY supports the following hardware types :
 *                 - (1) 48-bit Ethernet
 *             - (b) ONLY supports the following protocol types :
 *                 - (1) 128-bit IPv6 addresses
 *******************************************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  _NET_NDP_H_
#define  _NET_NDP_H_

#include  "net_cfg_net.h"

#ifdef   NET_NDP_MODULE_EN

/********************************************************************************************************
 ********************************************************************************************************
 *                                            INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <net/include/net_type.h>

#include  <cpu/include/cpu.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                             DATA TYPES
 ********************************************************************************************************
 *******************************************************************************************************/

/********************************************************************************************************
 *                                        NDP TIMEOUT DATA TYPE
 *******************************************************************************************************/

typedef enum net_ndp_timeout {
  NET_NDP_TIMEOUT_REACHABLE,
  NET_NDP_TIMEOUT_DELAY,
  NET_NDP_TIMEOUT_SOLICIT,
} NET_NDP_TIMEOUT;

/********************************************************************************************************
 *                                  NDP SOLICITATION MESSAGE DATA TYPE
 *******************************************************************************************************/

typedef enum net_ndp_solicit {
  NET_NDP_SOLICIT_MULTICAST,
  NET_NDP_SOLICIT_UNICAST,
  NET_NDP_SOLICIT_DAD,
} NET_NDP_SOLICIT;

/********************************************************************************************************
 ********************************************************************************************************
 *                                         FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

//                                                                 --------- NDP NEIGHBOR CACHE CFG FUNCTIONS ---------

CPU_BOOLEAN NetNDP_CfgNeighborCacheTimeout(CPU_INT16U timeout_sec);

CPU_BOOLEAN NetNDP_CfgReachabilityTimeout(NET_NDP_TIMEOUT timeout_type,
                                          CPU_INT16U      timeout_sec);

CPU_BOOLEAN NetNDP_CfgSolicitMaxNbr(NET_NDP_SOLICIT solicit_type,
                                    CPU_INT08U      max_nbr);

CPU_BOOLEAN NetNDP_CfgCacheTxQ_MaxTh(NET_BUF_QTY nbr_buf_max);
#ifdef __cplusplus
}
#endif

/****************************************************************************************************//**
 ********************************************************************************************************
 * @}                                          MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif  // NET_NDP_MODULE_EN
#endif  // _NET_NDP_H_
