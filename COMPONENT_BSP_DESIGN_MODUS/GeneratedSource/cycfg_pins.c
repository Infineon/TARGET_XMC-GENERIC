/*******************************************************************************
* File Name: cycfg_pins.c
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

#include "cycfg_pins.h"

const XMC_GPIO_CONFIG_t CYBSP_XTAL1_config = 
{
	.mode = (XMC_GPIO_MODE_t)CYBSP_XTAL1_MODE,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};
const XMC_GPIO_CONFIG_t CYBSP_XTAL2_config = 
{
	.mode = (XMC_GPIO_MODE_t)CYBSP_XTAL2_MODE,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
};

