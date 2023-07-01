/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "lvgl.h"
#include "lv_port_disp.h"
#include "ui/ui.h"
#include "lvgl_helpers.h"
#include "ui/contentChange.h"

#define LV_TICK_PERIOD_MS 1

static void lv_tick_task(void *arg);

/**********************
 *   APPLICATION MAIN
 **********************/
void app_main() {
    lv_init();

    /* Initialize SPI or I2C bus used by the drivers */
    lv_port_disp_init();

    /* Create and start a periodic timer interrupt to call lv_tick_inc */
    const esp_timer_create_args_t periodic_timer_args = {
        .callback = &lv_tick_task,
        .name = "periodic_gui"
    };
    esp_timer_handle_t periodic_timer;
    ESP_ERROR_CHECK(esp_timer_create(&periodic_timer_args, &periodic_timer));
    ESP_ERROR_CHECK(esp_timer_start_periodic(periodic_timer, LV_TICK_PERIOD_MS * 1000));

    ui_init();
    // change_time(11, 47);
    // change_date(2023, 5, 22);
    // change_temp(8);
    change_humi(66);

    while(1){
        lv_task_handler();
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}


static void lv_tick_task(void *arg) {
    (void) arg;

    lv_tick_inc(LV_TICK_PERIOD_MS);
}
