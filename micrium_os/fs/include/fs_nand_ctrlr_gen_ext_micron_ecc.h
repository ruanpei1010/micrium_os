/***************************************************************************//**
 * @file
 * @brief File System - NAND Device Generic Controller Micron On-Chip ECC
 *        Extension
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
 *                                                   MODULE
 ********************************************************************************************************
 *******************************************************************************************************/

#ifndef  FS_NAND_CTRLR_GEN_EXT_MICRON_ECC_H_
#define  FS_NAND_CTRLR_GEN_EXT_MICRON_ECC_H_

/********************************************************************************************************
 ********************************************************************************************************
 *                                               INCLUDE FILES
 ********************************************************************************************************
 *******************************************************************************************************/

#include  <fs/include/fs_nand_ctrlr_gen.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                               DATA TYPES
 ********************************************************************************************************
 *******************************************************************************************************/

typedef struct fs_nand_ctrlr_gen_ext_micron_ecc_hw_info {
  struct fs_nand_ctrlr_gen_ext_hw_info CtrlrGenExtHwInfo;
} FS_NAND_CTRLR_GEN_EXT_MICRON_ECC_HW_INFO;

/********************************************************************************************************
 ********************************************************************************************************
 *                                               GLOBAL VARIABLES
 ********************************************************************************************************
 *******************************************************************************************************/

extern const FS_NAND_CTRLR_GEN_EXT_MICRON_ECC_HW_INFO FS_NAND_CtrlrGen_MicronECC_HwInfo;

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif