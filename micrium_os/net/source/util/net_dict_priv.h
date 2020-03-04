/***************************************************************************//**
 * @file
 * @brief Network Dictionary
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

#ifndef  _NET_DICT_PRIV_H_
#define  _NET_DICT_PRIV_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                               INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <common/include/lib_def.h>
#include  <cpu/include/cpu.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                               DATA TYPES
 ********************************************************************************************************
 *******************************************************************************************************/

typedef  CPU_INT32U DICT_KEY;

#define  DICT_KEY_INVALID                       DEF_INT_32U_MAX_VAL

typedef  struct  dict {
  const DICT_KEY   Key;
  const CPU_CHAR   *StrPtr;
  const CPU_INT32U StrLen;
} NET_DICT;

/********************************************************************************************************
 ********************************************************************************************************
 *                                           FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

CPU_INT32U NetDict_KeyGet(const NET_DICT *p_dict_tbl,
                          CPU_INT32U     dict_size,
                          const CPU_CHAR *p_str_cmp,
                          CPU_BOOLEAN    case_sensitive,
                          CPU_INT32U     str_len);

NET_DICT *NetDict_EntryGet(const NET_DICT *p_dict_tbl,
                           CPU_INT32U     dict_size,
                           CPU_INT32U     key);

CPU_CHAR *NetDict_ValCopy(const NET_DICT *p_dict_tbl,
                          CPU_INT32U     dict_size,
                          CPU_INT32U     key,
                          CPU_CHAR       *p_buf,
                          CPU_SIZE_T     buf_len);

CPU_CHAR *NetDict_StrKeySrch(const NET_DICT *p_dict_tbl,
                             CPU_INT32U     dict_size,
                             CPU_INT32U     key,
                             const CPU_CHAR *p_str,
                             CPU_SIZE_T     str_len);

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif // _NET_DICT_PRIV_H_
