#ifndef __BTC_GATTS_H__
#define __BTC_GATTS_H__

#include "btc_task.h"
#include "esp_bt_defs.h"
#include "esp_gatt_defs.h"
#include "esp_gatts_api.h"

typedef enum {
	BTC_GATTS_ACT_APP_REGISTER = 0,
	BTC_GATTS_ACT_APP_UNREGISTER,
	BTC_GATTS_ACT_CREATE_SERVICE,
	BTC_GATTS_ACT_DELETE_SERVICE,
	BTC_GATTS_ACT_START_SERVICE,
	BTC_GATTS_ACT_STOP_SERVICE,
	BTC_GATTS_ACT_ADD_INCLUDE_SERVICE,
	BTC_GATTS_ACT_ADD_CHAR,
	BTC_GATTS_ACT_ADD_CHAR_DESCR,
	BTC_GATTS_ACT_SEND_INDICATE,
	BTC_GATTS_ACT_SEND_RESPONSE,
	BTC_GATTS_ACT_OPEN,
	BTC_GATTS_ACT_CLOSE,
} btc_gatts_act_t;

/* btc_ble_gatts_args_t */
typedef union{
	//BTC_GATTS_ACT_APP_REGISTER = 0,
	struct app_reg_args {
		uint16_t app_id;
	} app_reg;
	//BTC_GATTS_ACT_APP_UNREGISTER,
	struct app_unreg_args {
		esp_gatt_if_t gatt_if;
	} app_unreg;
	//BTC_GATTS_ACT_CREATE_SERVICE,
	struct create_srvc_args {
		esp_gatt_if_t gatt_if;
		esp_gatt_srvc_id_t service_id;
		uint16_t num_handle;
	} create_srvc;
	//BTC_GATTS_ACT_DELETE_SERVICE,
	struct delete_srvc_args {
		uint16_t service_handle;
	} delete_srvc;
	//BTC_GATTS_ACT_START_SERVICE,
	struct start_srvc_args {
		uint16_t service_handle;
	} start_srvc;
	//BTC_GATTS_ACT_STOP_SERVICE,
	struct stop_srvc_args {
		uint16_t service_handle;
	} stop_srvc;
	//BTC_GATTS_ACT_ADD_INCLUDE_SERVICE,
	struct add_incl_srvc_args {
		uint16_t service_handle;
		uint16_t included_service_handle;
	} add_incl_srvc;
	//BTC_GATTS_ACT_ADD_CHAR,
	struct add_char_args {
		uint16_t service_handle;
		esp_bt_uuid_t char_uuid;
		esp_gatt_perm_t perm;
		esp_gatt_char_prop_t property;
	} add_char;
	//BTC_GATTS_ACT_ADD_CHAR_DESCR,
	struct add_descr_args {
		uint16_t service_handle;
		esp_bt_uuid_t descr_uuid;
		esp_gatt_perm_t perm;
	} add_descr;
	//BTC_GATTS_ACT_SEND_INDICATE,
	struct send_indicate_args {
		uint16_t conn_id;
		uint16_t attr_handle;
		bool need_confirm;
		uint16_t value_len;
		uint8_t *value;
	} send_ind;
	//BTC_GATTS_ACT_SEND_RESPONSE,
	struct send_rsp_args {
		uint16_t conn_id;
		uint32_t trans_id;
		esp_gatt_status_t status;
		esp_gatt_rsp_t *rsp;
	} send_rsp;
	//BTC_GATTS_ACT_OPEN,
	struct open_args {
		esp_gatt_if_t gatt_if;
		esp_bd_addr_t remote_bda;
		bool is_direct;
	} open;
	//BTC_GATTS_ACT_CLOSE,
	struct close_args {
		uint16_t conn_id;
	} close;
} btc_ble_gatts_args_t;


void btc_gatts_call_handler(btc_msg_t *msg);
void btc_gatts_cb_handler(btc_msg_t *msg);
void btc_gatts_arg_deep_copy(btc_msg_t *msg, void *p_dest, void *p_src);

#endif /* __BTC_GATTS_H__ */
