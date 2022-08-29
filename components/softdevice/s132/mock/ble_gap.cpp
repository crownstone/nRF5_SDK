/*
 * Author: Crownstone Team
 * Copyright: Crownstone (https://crownstone.rocks)
 * Date: Aug 29, 2022
 * License: LGPLv3+, Apache License 2.0, and/or MIT (triple-licensed)
 */

#include <ble_gap.h>
#include <cstring>


uint32_t sd_ble_gap_addr_get(ble_gap_addr_t *p_addr){
	uint8_t adr [] = {0x00,0x01,0x02,0x03,0x04,0x05};
	std::memcpy(p_addr->addr, adr, sizeof(adr));
	return NRF_SUCCESS;
}
