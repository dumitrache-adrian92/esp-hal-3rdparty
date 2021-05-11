// Copyright 2010-2016 Espressif Systems (Shanghai) PTE LTD
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

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Enable an entropy source for RNG if RF is disabled
 *
 * The exact internal entropy source mechanism depends on the chip in use but
 * all SoCs use the SAR ADC to continuously mix random bits (an internal
 * noise reading) into the HWRNG. Consult the SoC Technical Reference
 * Manual for more information.
 *
 * Can also be used from app code early during operation, if true
 * random numbers are required before RF is initialised. Consult
 * ESP-IDF Programming Guide "Random Number Generation" section for
 * details.
 */
void bootloader_random_enable(void);

/**
 * @brief Disable entropy source for RNG
 *
 * Disables internal entropy source. Must be called after
 * bootloader_random_enable() and before RF features, ADC, or
 * I2S (ESP32 only) are initialized.
 *
 * Consult the ESP-IDF Programming Guide "Random Number Generation"
 * section for details.
 */
void bootloader_random_disable(void);

/**
 * @brief Fill buffer with 'length' random bytes
 *
 * @note If this function is being called from app code only, and never
 * from the bootloader, then it's better to call esp_fill_random().
 *
 * @param buffer Pointer to buffer
 * @param length This many bytes of random data will be copied to buffer
 */
void bootloader_fill_random(void *buffer, size_t length);

#ifdef __cplusplus
}
#endif
