/***************************************************************************//**
 * @file
 * @brief Network - Http Server Static File System Port
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
 * @addtogroup NET_HTTPs
 * @{
 *******************************************************************************************************/

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  _HTTP_SERVER_FS_PORT_STATIC_H_
#define  _HTTP_SERVER_FS_PORT_STATIC_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                            INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <http_server_fs_port_static_cfg.h>

#include  <net/include/net_fs.h>

#include  <cpu/include/cpu.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                          GLOBAL VARIABLES
 ********************************************************************************************************
 *******************************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

extern const NET_FS_API HTTPs_FS_API_Static;

/********************************************************************************************************
 ********************************************************************************************************
 *                                         FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

CPU_BOOLEAN HTTPs_FS_Init(void);

CPU_BOOLEAN HTTPs_FS_AddFile(CPU_CHAR   *p_name,
                             void       *p_data,
                             CPU_INT32U size);

CPU_BOOLEAN HTTPs_FS_SetTime(NET_FS_DATE_TIME *p_time);

#ifdef __cplusplus
}
#endif

/****************************************************************************************************//**
 ********************************************************************************************************
 * @}                                          MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif  // _HTTP_SERVER_FS_PORT_STATIC_H_
