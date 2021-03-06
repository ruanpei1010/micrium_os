/***************************************************************************//**
 * @file
 * @brief File System - Hamming Code Calculation
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

#ifndef   ECC_HAMMING_H_
#define   ECC_HAMMING_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                               INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <cpu/include/cpu.h>
#include  <common/include/lib_mem.h>
#include  <common/include/rtos_path.h>
#include  <fs_storage_cfg.h>
#include  <fs/include/ecc.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                           GLOBAL VARIABLES
 ********************************************************************************************************
 *******************************************************************************************************/

extern const ECC_CALC Hamming_ECC;

/********************************************************************************************************
 ********************************************************************************************************
 *                                           FUNCTION PROTOTYPES
 ********************************************************************************************************
 *******************************************************************************************************/

void Hamming_Calc(void       *p_buf,                            // Calc Hamming code.
                  CPU_SIZE_T len,
                  void       *p_buf_ext,
                  CPU_SIZE_T len_ext,
                  CPU_INT08U *p_ecc);

CPU_INT08U Hamming_Chk(void        *p_buf,                      // Chk Hamming code.
                       CPU_SIZE_T  len,
                       void        *p_buf_ext,
                       CPU_SIZE_T  len_ext,
                       CPU_INT08U  *p_ecc,
                       ECC_ERR_LOC err_loc_tbl[],
                       CPU_INT08U  err_loc_tbl_size,
                       RTOS_ERR    *p_err);

void Hamming_Correct(void       *p_buf,                         // Correct errors.
                     CPU_SIZE_T len,
                     void       *p_buf_ext,
                     CPU_SIZE_T len_ext,
                     CPU_INT08U *p_ecc,
                     RTOS_ERR   *p_err);

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif
