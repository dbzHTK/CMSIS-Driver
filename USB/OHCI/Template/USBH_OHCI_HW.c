/* -----------------------------------------------------------------------------
 * Copyright (c) 2024 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *
 * $Date:        15. May 2024
 * $Revision:    V1.0
 *
 * Project:      USB Host OHCI Controller Hardware-specific Driver template
 * -------------------------------------------------------------------------- */

#include "USBH_OHCI_HW.h"

static USBH_OHCI_Interrupt_t OHCI_IRQ_Handler;

/**
  \fn          int32_t USBH_OHCI_HW_Initialize (uint8_t ctrl, USBH_OHCI_Interrupt_t interrupt_handler)
  \brief       Initialize USB Host OHCI Interface.
  \param[in]   ctrl               Index of USB Host controller
  \param[in]   interrupt_handler  Pointer to Interrupt Handler Routine
  \return      0 on success, -1 on error.
*/
int32_t USBH_OHCI_HW_Initialize (uint8_t ctrl, USBH_OHCI_Interrupt_t interrupt_handler) {

  // Add hardware-specific initialization code

  OHCI_IRQ_Handler = interrupt_handler; // Register OHCI interrupt handler

  return 0;
}

/**
  \fn          int32_t USBH_OHCI_HW_Uninitialize (uint8_t ctrl)
  \brief       De-initialize USB Host OHCI Interface.
  \param[in]   ctrl               Index of USB Host controller
  \return      0 on success, -1 on error.
*/
int32_t USBH_OHCI_HW_Uninitialize (uint8_t ctrl) {

  // Add hardware-specific uninitialization code

  return 0;
}

/**
  \fn          int32_t USBH_OHCI_HW_PowerControl (uint8_t ctrl, uint32_t state)
  \brief       Control USB Host OHCI Interface Power.
  \param[in]   ctrl               Index of USB Host controller
  \param[in]   state              Power state (0 = power off, 1 = power on)
  \return      0 on success, -1 on error.
*/
int32_t USBH_OHCI_HW_PowerControl (uint8_t ctrl, uint32_t state) {

  if (state == 0U) {                    // If power off requested
    // Add hardware-specific code to power off the Host interface
  } else {                              // If power on requested
    // Add hardware-specific code to power on the Host interface
  }

  return 0;
}

/**
  \fn          void USBH0_IRQ (void)
  \brief       USB0 Host Interrupt Routine (IRQ).
*/
void USBH0_IRQ (void) {
  OHCI_IRQ_Handler();                   // Call registered OHCI interrupt handler from hardware USB interrupt handler
}
