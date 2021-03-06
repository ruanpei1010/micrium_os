/***************************************************************************//**
 * @file
 * @brief Network - DHCP Client Module
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

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  _DHCP_CLIENT_PRIV_H_
#define  _DHCP_CLIENT_PRIV_H_

#include  <net/include/net_cfg_net.h>

#ifdef NET_DHCP_CLIENT_MODULE_EN

/********************************************************************************************************
 ********************************************************************************************************
 *                                            INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <net/include/dhcp_client.h>
#include  <net/source/util/net_svc_task_priv.h>
#include  <common/include/lib_mem.h>
#include  <common/include/rtos_err.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                         FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

void DHCPc_Init(NET_SVC_TASK_HANDLE task_handle,
                MEM_SEG             *p_mem_seg,
                RTOS_ERR            *p_err);

/********************************************************************************************************
 ********************************************************************************************************
 *                                             MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif  // NET_DHCP_CLIENT_MODULE_EN
#endif  // _DHCP_CLIENT_PRIV_H_
