/***************************************************************************//**
 * @file
 * @brief USB Device Drivers - Api Declarations
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

#ifndef  _USBD_DRV_H
#define  _USBD_DRV_H

#include  <usb/include/device/usbd_core.h>

/********************************************************************************************************
 ********************************************************************************************************
 *                                           USB DEVICE DRIVER APIS
 ********************************************************************************************************
 *******************************************************************************************************/

/********************************************************************************************************
 *                                   SYNOPSYS DESIGNWARE OTG FS DRIVER
 *
 * Note(s) : (1) The following MCUs are support by USBD_DrvAPI_EFM32_OTG_FS API:
 *
 *                           Silicon Labs        EFM32 Giant   Gecko series.
 *                           Silicon Labs        EFM32 Wonder  Gecko series.
 *                           Silicon Labs        EFM32 Leopard Gecko series.
 *******************************************************************************************************/

extern USBD_DRV_API USBD_DrvAPI_EFM32_OTG_FS;

/********************************************************************************************************
 ********************************************************************************************************
 *                                               MODULE END
 ********************************************************************************************************
 *******************************************************************************************************/

#endif
