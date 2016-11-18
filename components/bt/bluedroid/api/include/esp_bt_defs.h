#ifndef __ESP_BT_DEFS_H__
#define	__ESP_BT_DEFS_H__

#include <stdint.h>
#include <stdbool.h>

/* Status Return Value */
typedef enum {
	ESP_BT_STATUS_SUCCESS          =  0,          /* Successful operation. */
	ESP_BT_STATUS_FAILURE          =  1,          /* Generic failure. */
	ESP_BT_STATUS_PENDING          =  2,          /* API cannot be completed right now */
	ESP_BT_STATUS_BUSY             =  3,
	ESP_BT_STATUS_NO_RESOURCES     =  4,
	ESP_BT_STATUS_WRONG_MODE       =  5,
} esp_bt_status_t;

#define ESP_DEFAULT_GATT_IF		    	0xff

#define ESP_BLE_CONN_PARAM_UNDEF        0xffff      /* use this value when a specific value not to be overwritten */

#define ESP_BLE_IS_VALID_PARAM(x, min, max)  (((x) >= (min) && (x) <= (max)) || ((x) == ESP_BLE_CONN_PARAM_UNDEF))

typedef struct {
#define ESP_UUID_LEN_16		2
#define ESP_UUID_LEN_32		4
#define ESP_UUID_LEN_128	16
	uint16_t len;
	union {
		uint16_t	uuid16;
		uint32_t	uuid32;
		uint8_t		uuid128[ESP_UUID_LEN_128];
	} uuid;
} __attribute__((packed)) esp_bt_uuid_t;   /* tBT_UUID in "bt_types.h" */

typedef enum {
	ESP_BT_DEVICE_TYPE_BREDR   = 0x01,
	ESP_BT_DEVICE_TYPE_BLE     = 0x02,
	ESP_BT_DEVICE_TYPE_DUMO    = 0x03,
} esp_bt_dev_type_t;

#define ESP_BD_ADDR_LEN		6	
typedef uint8_t esp_bd_addr_t[ESP_BD_ADDR_LEN];    /* BD_ADDR in bt_types.h */

/// Own BD address source of the device
typedef enum {
   /// Public Address
   BD_ADDR_PUBLIC,
   /// Provided random address
   BD_ADDR_PROVIDED_RND,
   /// Provided static random address
   BD_ADDR_GEN_STATIC_RND,
   /// Generated resolvable private random address
   BD_ADDR_GEN_RSLV,
   /// Generated non-resolvable private random address
   BD_ADDR_GEN_NON_RSLV,
   /// Provided Reconnection address
   BD_ADDR_PROVIDED_RECON,
} esp_bd_addr_type_t;

typedef enum {
	BLE_ADDR_TYPE_PUBLIC		= 0x00,
	BLE_ADDR_TYPE_RANDOM		= 0x01,
	BLE_ADDR_TYPE_RPA_PUBLIC	= 0x02,
	BLE_ADDR_TYPE_RPA_RANDOM	= 0x03,
} esp_ble_addr_type_t;

#define APP_ID_MIN	0x0000
#define APP_ID_MAX	0x7fff

typedef void (* esp_profile_cb_t)(uint32_t event, void *param);

#define API_BLE_ISVALID_PARAM(x, min, max)  (((x) >= (min) && (x) <= (max)) || ((x) == ESP_BLE_CONN_PARAM_UNDEF))

#endif		///__ESP_BT_DEFS_H__
