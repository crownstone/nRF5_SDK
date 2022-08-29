/*
 * Author: Crownstone Team
 * Copyright: Crownstone (https://crownstone.rocks)
 * Date: Aug 29, 2022
 * License: LGPLv3+, Apache License 2.0, and/or MIT (triple-licensed)
 */

#include <nrf_sdm.h>

uint8_t is_enabled = 0;

uint32_t sd_softdevice_enable(nrf_clock_lf_cfg_t const * p_clock_lf_cfg, nrf_fault_handler_t fault_handler){
	is_enabled = 1;
	return NRF_SUCCESS;
}

uint32_t sd_softdevice_disable(void) {
	is_enabled = 0;
	return NRF_SUCCESS;
}
uint32_t sd_softdevice_is_enabled(uint8_t * p_softdevice_enabled) {
	*p_softdevice_enabled = is_enabled;
	return NRF_SUCCESS;
}



