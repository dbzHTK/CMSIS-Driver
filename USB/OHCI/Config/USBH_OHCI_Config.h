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
 * $Date:        16. May 2024
 * $Revision:    V1.0
 *
 * Project:      Config file for USB Host OHCI Controller Driver
 * -------------------------------------------------------------------------- */

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

#ifndef USBH_OHCI_CONFIG_H_
#define USBH_OHCI_CONFIG_H_

// <h>USB Host Controller 0
//   <o>Driver number <0-3>
//     <i>Specifies the exported Driver_USBH# instance
//     <i>For example for value 0 the exported driver will be Driver_USBH0
#define USBH0_OHCI_DRV_NUM              0

//   <o>OHCI registers base address <0-0xFFFFFFFF>
//     <i>Specifies the absolute address at which OHCI controller registers are located
#define USBH0_OHCI_BASE_ADDR            0x5000C000

//   <e>Relocated OHCI communication area (HCCA)
//     <i>Specifies if the communication area is located at a specific address
//     <i>(via the linker script).
#define USBH0_OHCI_HCCA_RELOC           0

//     <s.64>OHCI communication area section name
//       <i>Specifies the section name of the OHCI communication area
#define USBH0_OHCI_HCCA_SECTION_NAME    ".driver.usbh0.ohci_hcca"
//   </e>
// </h>

// <e>USB Host Controller 1
//   <i>Enables or disables USB Host Driver 1
#define USBH1_OHCI_ENABLED              0

//   <o>Driver number <0-3>
//     <i>Specifies the exported Driver_USBH# instance
//     <i>For example for value 1 the exported driver will be Driver_USBH1
#define USBH1_OHCI_DRV_NUM              1

//   <o>OHCI registers base address <0-0xFFFFFFFF>
//     <i>Specifies the absolute address at which OHCI controller registers are located
#define USBH1_OHCI_BASE_ADDR            0x00000000

//   <e>Relocated OHCI communication area (HCCA)
//     <i>Specifies if the communication area is located at a specific address
//     <i>(via the linker script).
#define USBH1_OHCI_HCCA_RELOC           0

//     <s.64>OHCI communication area section name
//       <i>Specifies the section name of the OHCI communication area
#define USBH1_OHCI_HCCA_SECTION_NAME    ".driver.usbh1.ohci_hcca"
//   </e>
// </e>

// <o>Maximum number of pipes (per controller) <1-15>
#define USBH_OHCI_MAX_PIPES             4

#endif /* USBH_OHCI_CONFIG_H_ */