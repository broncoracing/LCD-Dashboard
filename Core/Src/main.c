#include "lvgl.h"
#include <unistd.h>

int main(void) {
    // Initialize LVGL core
    lv_init();

    // Initialize your display and input device drivers here...

    // Create a simple button on the active screen
    lv_obj_t *btn = lv_btn_create(lv_scr_act());
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t *label = lv_label_create(btn);
    lv_label_set_text(label, "Hello LVGL!");

    // Main application loop
    for (;;) {
        lv_timer_handler(); // Update the LVGL tasks
        usleep(5000);       // Sleep for 5ms
        lv_tick_inc(5);     // Tell LVGL 5ms has passed
    }
    return 0;
}