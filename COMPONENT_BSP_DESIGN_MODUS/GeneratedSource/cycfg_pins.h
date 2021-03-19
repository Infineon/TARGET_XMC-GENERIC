/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.3.0.3651
* mtb-xmclib-cat3 3.0.0.276
* personalities 5.0.0.0
* udd 3.0.0.905
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "xmc_gpio.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_XTAL1_ENABLED 1U
#define CYBSP_XTAL1_PORT XMC_GPIO_PORT0
#define CYBSP_XTAL1_PORT_NUM 0U
#define CYBSP_XTAL1_PIN 10U
#ifndef ioss_0_port_0_pin_10_ALT
	#define ioss_0_port_0_pin_10_ALT 0U
#endif
#define CYBSP_XTAL1_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_0_pin_10_ALT)
#ifndef ioss_0_port_0_pin_10_HWCTRL
	#define ioss_0_port_0_pin_10_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_XTAL1_HWCTRL ioss_0_port_0_pin_10_HWCTRL
#define CYBSP_XTAL2_ENABLED 1U
#define CYBSP_XTAL2_PORT XMC_GPIO_PORT0
#define CYBSP_XTAL2_PORT_NUM 0U
#define CYBSP_XTAL2_PIN 11U
#ifndef ioss_0_port_0_pin_11_ALT
	#define ioss_0_port_0_pin_11_ALT 0U
#endif
#define CYBSP_XTAL2_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_0_pin_11_ALT)
#ifndef ioss_0_port_0_pin_11_HWCTRL
	#define ioss_0_port_0_pin_11_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_XTAL2_HWCTRL ioss_0_port_0_pin_11_HWCTRL

extern const XMC_GPIO_CONFIG_t CYBSP_XTAL1_config;
extern const XMC_GPIO_CONFIG_t CYBSP_XTAL2_config;


#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
