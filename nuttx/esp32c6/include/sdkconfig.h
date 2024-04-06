/*
 * Copyright (c) 2021 Espressif Systems (Shanghai) Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#define CONFIG_SOC_ADC_SUPPORTED 1
#define CONFIG_SOC_DEDICATED_GPIO_SUPPORTED 1
#define CONFIG_SOC_UART_SUPPORTED 1
#define CONFIG_SOC_GDMA_SUPPORTED 1
#define CONFIG_SOC_GPTIMER_SUPPORTED 1
#define CONFIG_SOC_PCNT_SUPPORTED 1
#define CONFIG_SOC_MCPWM_SUPPORTED 1
#define CONFIG_SOC_TWAI_SUPPORTED 1
#define CONFIG_SOC_ETM_SUPPORTED 1
#define CONFIG_SOC_PARLIO_SUPPORTED 1
#define CONFIG_SOC_BT_SUPPORTED 1
#define CONFIG_SOC_IEEE802154_SUPPORTED 1
#define CONFIG_SOC_ASYNC_MEMCPY_SUPPORTED 1
#define CONFIG_SOC_USB_SERIAL_JTAG_SUPPORTED 1
#define CONFIG_SOC_TEMP_SENSOR_SUPPORTED 1
#define CONFIG_SOC_WIFI_SUPPORTED 1
#define CONFIG_SOC_SUPPORTS_SECURE_DL_MODE 1
#define CONFIG_SOC_ULP_SUPPORTED 1
#define CONFIG_SOC_LP_CORE_SUPPORTED 1
#define CONFIG_SOC_EFUSE_KEY_PURPOSE_FIELD 1
#define CONFIG_SOC_RTC_FAST_MEM_SUPPORTED 1
#define CONFIG_SOC_RTC_MEM_SUPPORTED 1
#define CONFIG_SOC_I2S_SUPPORTED 1
#define CONFIG_SOC_RMT_SUPPORTED 1
#define CONFIG_SOC_SDM_SUPPORTED 1
#define CONFIG_SOC_GPSPI_SUPPORTED 1
#define CONFIG_SOC_LEDC_SUPPORTED 1
#define CONFIG_SOC_I2C_SUPPORTED 1
#define CONFIG_SOC_SYSTIMER_SUPPORTED 1
#define CONFIG_SOC_SUPPORT_COEXISTENCE 1
#define CONFIG_SOC_AES_SUPPORTED 1
#define CONFIG_SOC_MPI_SUPPORTED 1
#define CONFIG_SOC_SHA_SUPPORTED 1
#define CONFIG_SOC_HMAC_SUPPORTED 1
#define CONFIG_SOC_DIG_SIGN_SUPPORTED 1
#define CONFIG_SOC_ECC_SUPPORTED 1
#define CONFIG_SOC_FLASH_ENC_SUPPORTED 1
#define CONFIG_SOC_SECURE_BOOT_SUPPORTED 1
#define CONFIG_SOC_SDIO_SLAVE_SUPPORTED 1
#define CONFIG_SOC_BOD_SUPPORTED 1
#define CONFIG_SOC_APM_SUPPORTED 1
#define CONFIG_SOC_PMU_SUPPORTED 1
#define CONFIG_SOC_PAU_SUPPORTED 1
#define CONFIG_SOC_LP_TIMER_SUPPORTED 1
#define CONFIG_SOC_LP_AON_SUPPORTED 1
#define CONFIG_SOC_LP_I2C_SUPPORTED 1
#define CONFIG_SOC_XTAL_SUPPORT_40M 1
#define CONFIG_SOC_AES_SUPPORT_DMA 1
#define CONFIG_SOC_AES_GDMA 1
#define CONFIG_SOC_AES_SUPPORT_AES_128 1
#define CONFIG_SOC_AES_SUPPORT_AES_256 1
#define CONFIG_SOC_ADC_DIG_CTRL_SUPPORTED 1
#define CONFIG_SOC_ADC_DIG_IIR_FILTER_SUPPORTED 1
#define CONFIG_SOC_ADC_MONITOR_SUPPORTED 1
#define CONFIG_SOC_ADC_DMA_SUPPORTED 1
#define CONFIG_SOC_ADC_PERIPH_NUM 1
#define CONFIG_SOC_ADC_MAX_CHANNEL_NUM 7
#define CONFIG_SOC_ADC_ATTEN_NUM 4
#define CONFIG_SOC_ADC_DIGI_CONTROLLER_NUM 1
#define CONFIG_SOC_ADC_PATT_LEN_MAX 8
#define CONFIG_SOC_ADC_DIGI_MAX_BITWIDTH 12
#define CONFIG_SOC_ADC_DIGI_MIN_BITWIDTH 12
#define CONFIG_SOC_ADC_DIGI_IIR_FILTER_NUM 2
#define CONFIG_SOC_ADC_DIGI_MONITOR_NUM 2
#define CONFIG_SOC_ADC_DIGI_RESULT_BYTES 4
#define CONFIG_SOC_ADC_DIGI_DATA_BYTES_PER_CONV 4
#define CONFIG_SOC_ADC_SAMPLE_FREQ_THRES_HIGH 83333
#define CONFIG_SOC_ADC_SAMPLE_FREQ_THRES_LOW 611
#define CONFIG_SOC_ADC_RTC_MIN_BITWIDTH 12
#define CONFIG_SOC_ADC_RTC_MAX_BITWIDTH 12
#define CONFIG_SOC_ADC_CALIBRATION_V1_SUPPORTED 1
#define CONFIG_SOC_ADC_SELF_HW_CALI_SUPPORTED 1
#define CONFIG_SOC_ADC_CALIB_CHAN_COMPENS_SUPPORTED 1
#define CONFIG_SOC_ADC_TEMPERATURE_SHARE_INTR 1
#define CONFIG_SOC_BROWNOUT_RESET_SUPPORTED 1
#define CONFIG_SOC_SHARED_IDCACHE_SUPPORTED 1
#define CONFIG_SOC_CACHE_FREEZE_SUPPORTED 1
#define CONFIG_SOC_CPU_CORES_NUM 1
#define CONFIG_SOC_CPU_INTR_NUM 32
#define CONFIG_SOC_CPU_HAS_FLEXIBLE_INTC 1
#define CONFIG_SOC_INT_PLIC_SUPPORTED 1
#define CONFIG_SOC_CPU_BREAKPOINTS_NUM 4
#define CONFIG_SOC_CPU_WATCHPOINTS_NUM 4
#define CONFIG_SOC_CPU_WATCHPOINT_SIZE 0x80000000
#define CONFIG_SOC_CPU_HAS_PMA 1
#define CONFIG_SOC_CPU_IDRAM_SPLIT_USING_PMP 1
#define CONFIG_SOC_DS_SIGNATURE_MAX_BIT_LEN 3072
#define CONFIG_SOC_DS_KEY_PARAM_MD_IV_LENGTH 16
#define CONFIG_SOC_DS_KEY_CHECK_MAX_WAIT_US 1100
#define CONFIG_SOC_GDMA_GROUPS 1
#define CONFIG_SOC_GDMA_PAIRS_PER_GROUP 3
#define CONFIG_SOC_GDMA_SUPPORT_ETM 1
#define CONFIG_SOC_ETM_GROUPS 1
#define CONFIG_SOC_ETM_CHANNELS_PER_GROUP 50
#define CONFIG_SOC_GPIO_PORT 1
#define CONFIG_SOC_GPIO_PIN_COUNT 31
#define CONFIG_SOC_GPIO_SUPPORT_PIN_GLITCH_FILTER 1
#define CONFIG_SOC_GPIO_FLEX_GLITCH_FILTER_NUM 8
#define CONFIG_SOC_GPIO_SUPPORT_ETM 1
#define CONFIG_SOC_GPIO_ETM_EVENTS_PER_GROUP 8
#define CONFIG_SOC_GPIO_ETM_TASKS_PER_GROUP 8
#define CONFIG_SOC_GPIO_SUPPORT_RTC_INDEPENDENT 1
#define CONFIG_SOC_GPIO_SUPPORT_DEEPSLEEP_WAKEUP 1
#define CONFIG_SOC_GPIO_DEEP_SLEEP_WAKE_VALID_GPIO_MASK 0
#define CONFIG_SOC_GPIO_VALID_DIGITAL_IO_PAD_MASK 0x000000007FFFFF00
#define CONFIG_SOC_GPIO_SUPPORT_FORCE_HOLD 1
#define CONFIG_SOC_GPIO_SUPPORT_HOLD_SINGLE_IO_IN_DSLP 1
#define CONFIG_SOC_RTCIO_PIN_COUNT 8
#define CONFIG_SOC_RTCIO_INPUT_OUTPUT_SUPPORTED 1
#define CONFIG_SOC_RTCIO_HOLD_SUPPORTED 1
#define CONFIG_SOC_RTCIO_WAKE_SUPPORTED 1
#define CONFIG_SOC_DEDIC_GPIO_OUT_CHANNELS_NUM 8
#define CONFIG_SOC_DEDIC_GPIO_IN_CHANNELS_NUM 8
#define CONFIG_SOC_DEDIC_PERIPH_ALWAYS_ENABLE 1
#define CONFIG_SOC_I2C_NUM 1
#define CONFIG_SOC_I2C_FIFO_LEN 32
#define CONFIG_SOC_I2C_CMD_REG_NUM 8
#define CONFIG_SOC_I2C_SUPPORT_SLAVE 1
#define CONFIG_SOC_I2C_SUPPORT_HW_CLR_BUS 1
#define CONFIG_SOC_I2C_SUPPORT_XTAL 1
#define CONFIG_SOC_I2C_SUPPORT_RTC 1
#define CONFIG_SOC_LP_I2C_NUM 1
#define CONFIG_SOC_LP_I2C_FIFO_LEN 16
#define CONFIG_SOC_I2S_NUM 1
#define CONFIG_SOC_I2S_HW_VERSION_2 1
#define CONFIG_SOC_I2S_SUPPORTS_XTAL 1
#define CONFIG_SOC_I2S_SUPPORTS_PLL_F160M 1
#define CONFIG_SOC_I2S_SUPPORTS_PCM 1
#define CONFIG_SOC_I2S_SUPPORTS_PDM 1
#define CONFIG_SOC_I2S_SUPPORTS_PDM_TX 1
#define CONFIG_SOC_I2S_PDM_MAX_TX_LINES 2
#define CONFIG_SOC_I2S_SUPPORTS_TDM 1
#define CONFIG_SOC_LEDC_SUPPORT_PLL_DIV_CLOCK 1
#define CONFIG_SOC_LEDC_SUPPORT_XTAL_CLOCK 1
#define CONFIG_SOC_LEDC_CHANNEL_NUM 6
#define CONFIG_SOC_LEDC_TIMER_BIT_WIDTH 20
#define CONFIG_SOC_LEDC_SUPPORT_FADE_STOP 1
#define CONFIG_SOC_LEDC_GAMMA_CURVE_FADE_SUPPORTED 1
#define CONFIG_SOC_LEDC_GAMMA_CURVE_FADE_RANGE_MAX 16
#define CONFIG_SOC_LEDC_FADE_PARAMS_BIT_WIDTH 10
#define CONFIG_SOC_MMU_PAGE_SIZE_CONFIGURABLE 1
#define CONFIG_SOC_MMU_PERIPH_NUM 1
#define CONFIG_SOC_MMU_LINEAR_ADDRESS_REGION_NUM 1
#define CONFIG_SOC_MMU_DI_VADDR_SHARED 1
#define CONFIG_SOC_MPU_MIN_REGION_SIZE 0x20000000
#define CONFIG_SOC_MPU_REGIONS_MAX_NUM 8
#define CONFIG_SOC_PCNT_GROUPS 1
#define CONFIG_SOC_PCNT_UNITS_PER_GROUP 4
#define CONFIG_SOC_PCNT_CHANNELS_PER_UNIT 2
#define CONFIG_SOC_PCNT_THRES_POINT_PER_UNIT 2
#define CONFIG_SOC_PCNT_SUPPORT_RUNTIME_THRES_UPDATE 1
#define CONFIG_SOC_RMT_GROUPS 1
#define CONFIG_SOC_RMT_TX_CANDIDATES_PER_GROUP 2
#define CONFIG_SOC_RMT_RX_CANDIDATES_PER_GROUP 2
#define CONFIG_SOC_RMT_CHANNELS_PER_GROUP 4
#define CONFIG_SOC_RMT_MEM_WORDS_PER_CHANNEL 48
#define CONFIG_SOC_RMT_SUPPORT_RX_PINGPONG 1
#define CONFIG_SOC_RMT_SUPPORT_RX_DEMODULATION 1
#define CONFIG_SOC_RMT_SUPPORT_TX_ASYNC_STOP 1
#define CONFIG_SOC_RMT_SUPPORT_TX_LOOP_COUNT 1
#define CONFIG_SOC_RMT_SUPPORT_TX_LOOP_AUTO_STOP 1
#define CONFIG_SOC_RMT_SUPPORT_TX_SYNCHRO 1
#define CONFIG_SOC_RMT_SUPPORT_TX_CARRIER_DATA_ONLY 1
#define CONFIG_SOC_RMT_SUPPORT_XTAL 1
#define CONFIG_SOC_RMT_SUPPORT_RC_FAST 1
#define CONFIG_SOC_MCPWM_GROUPS 1
#define CONFIG_SOC_MCPWM_TIMERS_PER_GROUP 3
#define CONFIG_SOC_MCPWM_OPERATORS_PER_GROUP 3
#define CONFIG_SOC_MCPWM_COMPARATORS_PER_OPERATOR 2
#define CONFIG_SOC_MCPWM_GENERATORS_PER_OPERATOR 2
#define CONFIG_SOC_MCPWM_TRIGGERS_PER_OPERATOR 2
#define CONFIG_SOC_MCPWM_GPIO_FAULTS_PER_GROUP 3
#define CONFIG_SOC_MCPWM_CAPTURE_TIMERS_PER_GROUP 1
#define CONFIG_SOC_MCPWM_CAPTURE_CHANNELS_PER_TIMER 3
#define CONFIG_SOC_MCPWM_GPIO_SYNCHROS_PER_GROUP 3
#define CONFIG_SOC_MCPWM_SWSYNC_CAN_PROPAGATE 1
#define CONFIG_SOC_MCPWM_SUPPORT_ETM 1
#define CONFIG_SOC_MCPWM_CAPTURE_CLK_FROM_GROUP 1
#define CONFIG_SOC_PARLIO_GROUPS 1
#define CONFIG_SOC_PARLIO_TX_UNITS_PER_GROUP 1
#define CONFIG_SOC_PARLIO_RX_UNITS_PER_GROUP 1
#define CONFIG_SOC_PARLIO_TX_UNIT_MAX_DATA_WIDTH 16
#define CONFIG_SOC_PARLIO_RX_UNIT_MAX_DATA_WIDTH 16
#define CONFIG_SOC_PARLIO_TX_RX_SHARE_INTERRUPT 1
#define CONFIG_SOC_RSA_MAX_BIT_LEN 3072
#define CONFIG_SOC_SHA_DMA_MAX_BUFFER_SIZE 3968
#define CONFIG_SOC_SHA_SUPPORT_DMA 1
#define CONFIG_SOC_SHA_SUPPORT_RESUME 1
#define CONFIG_SOC_SHA_GDMA 1
#define CONFIG_SOC_SHA_SUPPORT_SHA1 1
#define CONFIG_SOC_SHA_SUPPORT_SHA224 1
#define CONFIG_SOC_SHA_SUPPORT_SHA256 1
#define CONFIG_SOC_SDM_GROUPS 1
#define CONFIG_SOC_SDM_CHANNELS_PER_GROUP 4
#define CONFIG_SOC_SDM_CLK_SUPPORT_PLL_F80M 1
#define CONFIG_SOC_SDM_CLK_SUPPORT_XTAL 1
#define CONFIG_SOC_SPI_PERIPH_NUM 2
#define CONFIG_SOC_SPI_MAX_CS_NUM 6
#define CONFIG_SOC_SPI_MAXIMUM_BUFFER_SIZE 64
#define CONFIG_SOC_SPI_SUPPORT_DDRCLK 1
#define CONFIG_SOC_SPI_SLAVE_SUPPORT_SEG_TRANS 1
#define CONFIG_SOC_SPI_SUPPORT_CD_SIG 1
#define CONFIG_SOC_SPI_SUPPORT_CONTINUOUS_TRANS 1
#define CONFIG_SOC_SPI_SUPPORT_SLAVE_HD_VER2 1
#define CONFIG_SOC_SPI_SUPPORT_CLK_XTAL 1
#define CONFIG_SOC_SPI_SUPPORT_CLK_PLL_F80M 1
#define CONFIG_SOC_SPI_SUPPORT_CLK_RC_FAST 1
#define CONFIG_SOC_MEMSPI_IS_INDEPENDENT 1
#define CONFIG_SOC_SPI_MAX_PRE_DIVIDER 16
#define CONFIG_SOC_SPI_MEM_SUPPORT_AUTO_WAIT_IDLE 1
#define CONFIG_SOC_SPI_MEM_SUPPORT_AUTO_SUSPEND 1
#define CONFIG_SOC_SPI_MEM_SUPPORT_AUTO_RESUME 1
#define CONFIG_SOC_SPI_MEM_SUPPORT_IDLE_INTR 1
#define CONFIG_SOC_SPI_MEM_SUPPORT_SW_SUSPEND 1
#define CONFIG_SOC_SPI_MEM_SUPPORT_CHECK_SUS 1
#define CONFIG_SOC_SPI_MEM_SUPPORT_WRAP 1
#define CONFIG_SOC_MEMSPI_SRC_FREQ_80M_SUPPORTED 1
#define CONFIG_SOC_MEMSPI_SRC_FREQ_40M_SUPPORTED 1
#define CONFIG_SOC_MEMSPI_SRC_FREQ_20M_SUPPORTED 1
#define CONFIG_SOC_SYSTIMER_COUNTER_NUM 2
#define CONFIG_SOC_SYSTIMER_ALARM_NUM 3
#define CONFIG_SOC_SYSTIMER_BIT_WIDTH_LO 32
#define CONFIG_SOC_SYSTIMER_BIT_WIDTH_HI 20
#define CONFIG_SOC_SYSTIMER_FIXED_DIVIDER 1
#define CONFIG_SOC_SYSTIMER_SUPPORT_RC_FAST 1
#define CONFIG_SOC_SYSTIMER_INT_LEVEL 1
#define CONFIG_SOC_SYSTIMER_ALARM_MISS_COMPENSATE 1
#define CONFIG_SOC_SYSTIMER_SUPPORT_ETM 1
#define CONFIG_SOC_LP_TIMER_BIT_WIDTH_LO 32
#define CONFIG_SOC_LP_TIMER_BIT_WIDTH_HI 16
#define CONFIG_SOC_TIMER_GROUPS 2
#define CONFIG_SOC_TIMER_GROUP_TIMERS_PER_GROUP 1
#define CONFIG_SOC_TIMER_GROUP_COUNTER_BIT_WIDTH 54
#define CONFIG_SOC_TIMER_GROUP_SUPPORT_XTAL 1
#define CONFIG_SOC_TIMER_GROUP_SUPPORT_RC_FAST 1
#define CONFIG_SOC_TIMER_GROUP_TOTAL_TIMERS 2
#define CONFIG_SOC_TIMER_SUPPORT_ETM 1
#define CONFIG_SOC_TWAI_CONTROLLER_NUM 2
#define CONFIG_SOC_TWAI_CLK_SUPPORT_XTAL 1
#define CONFIG_SOC_TWAI_BRP_MIN 2
#define CONFIG_SOC_TWAI_BRP_MAX 32768
#define CONFIG_SOC_TWAI_SUPPORTS_RX_STATUS 1
#define CONFIG_SOC_EFUSE_DIS_DOWNLOAD_ICACHE 1
#define CONFIG_SOC_EFUSE_DIS_PAD_JTAG 1
#define CONFIG_SOC_EFUSE_DIS_USB_JTAG 1
#define CONFIG_SOC_EFUSE_DIS_DIRECT_BOOT 1
#define CONFIG_SOC_EFUSE_SOFT_DIS_JTAG 1
#define CONFIG_SOC_EFUSE_DIS_ICACHE 1
#define CONFIG_SOC_EFUSE_BLOCK9_KEY_PURPOSE_QUIRK 1
#define CONFIG_SOC_SECURE_BOOT_V2_RSA 1
#define CONFIG_SOC_SECURE_BOOT_V2_ECC 1
#define CONFIG_SOC_EFUSE_SECURE_BOOT_KEY_DIGESTS 3
#define CONFIG_SOC_EFUSE_REVOKE_BOOT_KEY_DIGESTS 1
#define CONFIG_SOC_SUPPORT_SECURE_BOOT_REVOKE_KEY 1
#define CONFIG_SOC_FLASH_ENCRYPTED_XTS_AES_BLOCK_MAX 32
#define CONFIG_SOC_FLASH_ENCRYPTION_XTS_AES 1
#define CONFIG_SOC_FLASH_ENCRYPTION_XTS_AES_128 1
#define CONFIG_SOC_CRYPTO_DPA_PROTECTION_SUPPORTED 1
#define CONFIG_SOC_UART_NUM 2
#define CONFIG_SOC_UART_FIFO_LEN 128
#define CONFIG_SOC_UART_BITRATE_MAX 5000000
#define CONFIG_SOC_UART_SUPPORT_PLL_F80M_CLK 1
#define CONFIG_SOC_UART_SUPPORT_RTC_CLK 1
#define CONFIG_SOC_UART_SUPPORT_XTAL_CLK 1
#define CONFIG_SOC_UART_SUPPORT_WAKEUP_INT 1
#define CONFIG_SOC_UART_SUPPORT_FSM_TX_WAIT_SEND 1
#define CONFIG_SOC_COEX_HW_PTI 1
#define CONFIG_SOC_EXTERNAL_COEX_ADVANCE 1
#define CONFIG_SOC_PHY_DIG_REGS_MEM_SIZE 21
#define CONFIG_SOC_WIFI_LIGHT_SLEEP_CLK_WIDTH 12
#define CONFIG_SOC_PM_SUPPORT_WIFI_WAKEUP 1
#define CONFIG_SOC_PM_SUPPORT_BEACON_WAKEUP 1
#define CONFIG_SOC_PM_SUPPORT_BT_WAKEUP 1
#define CONFIG_SOC_PM_SUPPORT_EXT1_WAKEUP 1
#define CONFIG_SOC_PM_SUPPORT_CPU_PD 1
#define CONFIG_SOC_PM_SUPPORT_MODEM_PD 1
#define CONFIG_SOC_PM_SUPPORT_XTAL32K_PD 1
#define CONFIG_SOC_PM_SUPPORT_RC32K_PD 1
#define CONFIG_SOC_PM_SUPPORT_RC_FAST_PD 1
#define CONFIG_SOC_PM_SUPPORT_VDDSDIO_PD 1
#define CONFIG_SOC_PM_SUPPORT_TOP_PD 1
#define CONFIG_SOC_PM_SUPPORT_HP_AON_PD 1
#define CONFIG_SOC_PM_SUPPORT_MAC_BB_PD 1
#define CONFIG_SOC_PM_SUPPORT_RTC_PERIPH_PD 1
#define CONFIG_SOC_PM_SUPPORT_PMU_MODEM_STATE 1
#define CONFIG_SOC_PM_SUPPORT_DEEPSLEEP_CHECK_STUB_ONLY 1
#define CONFIG_SOC_PM_CPU_RETENTION_BY_SW 1
#define CONFIG_SOC_PM_MODEM_RETENTION_BY_REGDMA 1
#define CONFIG_SOC_PM_RETENTION_HAS_CLOCK_BUG 1
#define CONFIG_SOC_PM_PAU_LINK_NUM 4
#define CONFIG_SOC_CLK_RC_FAST_SUPPORT_CALIBRATION 1
#define CONFIG_SOC_MODEM_CLOCK_IS_INDEPENDENT 1
#define CONFIG_SOC_CLK_XTAL32K_SUPPORTED 1
#define CONFIG_SOC_CLK_OSC_SLOW_SUPPORTED 1
#define CONFIG_SOC_CLK_RC32K_SUPPORTED 1
#define CONFIG_SOC_TEMPERATURE_SENSOR_SUPPORT_FAST_RC 1
#define CONFIG_SOC_TEMPERATURE_SENSOR_SUPPORT_XTAL 1
#define CONFIG_SOC_TEMPERATURE_SENSOR_INTR_SUPPORT 1
#define CONFIG_SOC_WIFI_HW_TSF 1
#define CONFIG_SOC_WIFI_GCMP_SUPPORT 1
#define CONFIG_SOC_WIFI_WAPI_SUPPORT 1
#define CONFIG_SOC_WIFI_CSI_SUPPORT 1
#define CONFIG_SOC_WIFI_MESH_SUPPORT 1
#define CONFIG_SOC_WIFI_HE_SUPPORT 1
#define CONFIG_SOC_BLE_SUPPORTED 1
#define CONFIG_SOC_BLE_MESH_SUPPORTED 1
#define CONFIG_SOC_ESP_NIMBLE_CONTROLLER 1
#define CONFIG_SOC_BLE_50_SUPPORTED 1
#define CONFIG_SOC_BLE_DEVICE_PRIVACY_SUPPORTED 1
#define CONFIG_SOC_BLE_POWER_CONTROL_SUPPORTED 1
#define CONFIG_SOC_BLUFI_SUPPORTED 1
#define CONFIG_SOC_BLE_MULTI_CONN_OPTIMIZATION 1
#define CONFIG_SOC_BLE_USE_WIFI_PWR_CLK_WORKAROUND 1

#include <nuttx/config.h>

#define CONFIG_ESP_REV_MIN_FULL 0
#define CONFIG_ESP_REV_MAX_FULL 99
#define CONFIG_IDF_TARGET_ARCH_RISCV 1
#define CONFIG_IDF_TARGET_ESP32C6 1
#define CONFIG_IDF_FIRMWARE_CHIP_ID 0x000D
#define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ CONFIG_ESPRESSIF_CPU_FREQ_MHZ
#define CONFIG_RTC_CLK_SRC_INT_RC 1
#define CONFIG_RTC_CLK_CAL_CYCLES 1024
#define CONFIG_RTC_CLOCK_BBPLL_POWER_ON_WITH_USB 1
#define CONFIG_XTAL_FREQ 40

#define CONFIG_HAL_SYSTIMER_USE_ROM_IMPL 1
#define CONFIG_HAL_WDT_USE_ROM_IMPL 1

#define CONFIG_MMU_PAGE_SIZE 0x10000
#define SOC_MMU_PAGE_SIZE CONFIG_MMU_PAGE_SIZE
#define CONFIG_LOG_TIMESTAMP_SOURCE_RTOS 1

#define CONFIG_IDF_ENV_FPGA 0

#define CONFIG_ESPTOOLPY_FLASHMODE_DIO 1

#ifdef CONFIG_ESPRESSIF_BROWNOUT_DET
#define CONFIG_ESP_BROWNOUT_DET_LVL CONFIG_ESPRESSIF_BROWNOUT_DET_LVL
#else
#define CONFIG_ESP_BROWNOUT_DET 0
#endif

#if (defined(CONFIG_UART0_SERIAL_CONSOLE) && defined(CONFIG_ESPRESSIF_UART0)) || defined(CONFIG_ESPRESSIF_USBSERIAL)
#define CONFIG_ESP_CONSOLE_UART_NUM 0
#elif defined(CONFIG_UART1_SERIAL_CONSOLE) && defined(CONFIG_ESPRESSIF_UART1)
#define CONFIG_ESP_CONSOLE_UART_NUM 1
#endif

#if defined(CONFIG_DEBUG_INFO)
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_LOG_MAXIMUM_LEVEL 3
#elif defined(CONFIG_DEBUG_WARN)
#define CONFIG_LOG_DEFAULT_LEVEL 2
#define CONFIG_LOG_MAXIMUM_LEVEL 2
#elif defined(CONFIG_DEBUG_ERROR)
#define CONFIG_LOG_DEFAULT_LEVEL 1
#define CONFIG_LOG_MAXIMUM_LEVEL 1
#else
#define CONFIG_LOG_DEFAULT_LEVEL 0
#define CONFIG_LOG_MAXIMUM_LEVEL 0
#endif

#ifdef CONFIG_ESPRESSIF_SIMPLE_BOOT
#  define CONFIG_ESP_CONSOLE_UART               1
#  define CONFIG_ESP_CONSOLE_UART_BAUDRATE      115200
#  define CONFIG_PARTITION_TABLE_OFFSET         0x0000
#  define CONFIG_BOOTLOADER_OFFSET_IN_FLASH     0x0000
#  define IDF_VER                               0
#  define CONFIG_FREERTOS_UNICORE               1
#  define CONFIG_BOOTLOADER_FLASH_XMC_SUPPORT   1
#endif