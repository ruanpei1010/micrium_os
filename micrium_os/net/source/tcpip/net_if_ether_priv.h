/***************************************************************************//**
 * @file
 * @brief Network Interface Layer - Ethernet
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

#ifndef  _NET_IF_ETHER_PRIV_H_
#define  _NET_IF_ETHER_PRIV_H_

#include  "../../include/net_cfg_net.h"

#ifdef  NET_IF_ETHER_MODULE_EN

/********************************************************************************************************
 ********************************************************************************************************
 *                                               INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  "net_if_802x_priv.h"

#include  <net/include/net_if_ether.h>
#include  <common/include/rtos_err.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                               DEFINES
 ********************************************************************************************************
 *******************************************************************************************************/

#define  NET_IF_ETHER_BUF_RX_LEN_MIN     NET_IF_802x_BUF_RX_LEN_MIN
#define  NET_IF_ETHER_BUF_TX_LEN_MIN     NET_IF_802x_BUF_TX_LEN_MIN

/********************************************************************************************************
 ********************************************************************************************************
 *                                           FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

void NetIF_Ether_Init(RTOS_ERR *p_err);

void NetIF_Ether_Reg(CPU_CHAR             *p_name,
                     NET_IF_ETHER_HW_INFO *p_ctrlr_info,
                     RTOS_ERR             *p_err);

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif  // NET_IF_ETHER_MODULE_EN
#endif  // _NET_IF_ETHER_PRIV_H_
