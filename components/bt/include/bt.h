#ifndef __BT_H__
#define __BT_H__

#include "freertos/FreeRTOS.h"
#include "esp_err.h"

typedef void (* bt_app_startup_cb_t)(void *param);

esp_err_t esp_bt_startup(bt_app_startup_cb_t cb, void *ctx);

/* @breif: vhci_host_callback
 *  used for vhci call host function to notify what host need to do
 *  
 *  notify_host_send_available: notify host can send packet to controller
 *  notify_host_recv: notify host that controller has packet send to host
 */
typedef struct vhci_host_callback {

    void (*notify_host_send_available)(void);
    int (*notify_host_recv)(uint8_t *data, uint16_t len);
} vhci_host_callback_t;

/* @breif: API_vhci_host_check_send_available
 *  used for check actively if the host can send packet to controller or not.
 *  return true for ready to send, false means cannot send packet
 */
bool API_vhci_host_check_send_available(void);

/* @breif: API_vhci_host_send_packet 
 * host send packet to controller
 * param data is the packet point, the param len is the packet length
 * return void
 */
void API_vhci_host_send_packet(uint8_t *data, uint16_t len);

/* @breif: API_vhci_host_register_callback
 * register the vhci referece callback, the call back
 * struct defined by vhci_host_callback structure.
 * param is the vhci_host_callback type variable
 */
void API_vhci_host_register_callback(const vhci_host_callback_t *callback);

#endif /* __BT_H__ */
