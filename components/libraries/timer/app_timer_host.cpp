/*
 * Author: Crownstone Team
 * Copyright: Crownstone (https://crownstone.rocks)
 * Date: Aug 22, 2022
 * License: LGPLv3+, Apache License 2.0, and/or MIT (triple-licensed)
 */

ret_code_t app_timer_init(void) {
    return ERR_SUCCESS;
}

ret_code_t app_timer_create(
    app_timer_id_t const* p_timer_id,
    app_timer_mode_t mode,
    app_timer_timeout_handler_t timeout_handler) {
    return ERR_SUCCESS;
}

ret_code_t app_timer_start(app_timer_id_t timer_id, uint32_t timeout_ticks, void* p_context) {
    return ERR_SUCCESS;
}

ret_code_t app_timer_stop(app_timer_id_t timer_id) {
    return ERR_SUCCESS;
}

ret_code_t app_timer_stop_all(void) {
    return ERR_SUCCESS;
}

uint32_t app_timer_cnt_get(void) {
    return ERR_SUCCESS;
}

uint32_t app_timer_cnt_diff_compute(uint32_t ticks_to, uint32_t ticks_from) {
    return ERR_SUCCESS;
}

uint8_t app_timer_op_queue_utilization_get(void) {
    return ERR_SUCCESS;
}

void app_timer_pause(void) {}

void app_timer_resume(void) {}
