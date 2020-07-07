// Copyright 2015-2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// ESP32 has 1 GPIO peripheral
#define SOC_GPIO_PORT           (1)
#define GPIO_PIN_COUNT          (40)

// On ESP32 those PADs which have RTC functions must set pullup/down/capability via RTC register. 
// On ESP32-S2, Digital IOs have their own registers to control pullup/down/capability, independent with RTC registers.
#define GPIO_SUPPORTS_RTC_INDEPENDENT (0)
// Force hold is a new function of ESP32-S2
#define GPIO_SUPPORTS_FORCE_HOLD      (0)

#define GPIO_APP_CPU_INTR_ENA      (BIT(0))
#define GPIO_APP_CPU_NMI_INTR_ENA  (BIT(1))
#define GPIO_PRO_CPU_INTR_ENA      (BIT(2))
#define GPIO_PRO_CPU_NMI_INTR_ENA  (BIT(3))
#define GPIO_SDIO_EXT_INTR_ENA     (BIT(4))

#define GPIO_MODE_DEF_DISABLE         (0)
#define GPIO_MODE_DEF_INPUT           (BIT0)
#define GPIO_MODE_DEF_OUTPUT          (BIT1)
#define GPIO_MODE_DEF_OD              (BIT2)

#define GPIO_IS_VALID_GPIO(gpio_num)              ((gpio_num < GPIO_PIN_COUNT && GPIO_PIN_MUX_REG[gpio_num] != 0))                                     /*!< Check whether it is a valid GPIO number */
#define GPIO_IS_VALID_OUTPUT_GPIO(gpio_num)       ((GPIO_IS_VALID_GPIO(gpio_num)) && (gpio_num < 34))                                                  /*!< Check whether it can be a valid GPIO number of output mode */
#define GPIO_MASK_CONTAIN_INPUT_GPIO(gpio_mask)   ((gpio_mask & (GPIO_SEL_34 | GPIO_SEL_35 | GPIO_SEL_36 | GPIO_SEL_37 | GPIO_SEL_38 | GPIO_SEL_39)))  /*!< Check whether it contains input io */

#define GPIO_MATRIX_CONST_ONE_INPUT   (0x38)
#define GPIO_MATRIX_CONST_ZERO_INPUT  (0x30)

#ifdef __cplusplus
}
#endif
