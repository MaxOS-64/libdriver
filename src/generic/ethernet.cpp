/**
 * @file ethernet.cpp
 * @brief Implementation of an Ethernet driver interface
 *
 * @date 1st December 2022
 * @author Max Tyson
 */

#include <libdriver/generic/ethernet.h>

using namespace LibDriver;
using namespace LibDriver::generic;

Ethernet::Ethernet() = default;
Ethernet::~Ethernet() = default;

/**
 * @brief Get the MAC address
 *
 * @return the MAC address
 */
uint64_t Ethernet::get_mac_address() {
	return 0;
}

/**
 * @brief send data to the network via the driver backend
 *
 * @param buffer  The buffer to send
 * @param size The size of the buffer
 */
void Ethernet::send(uint8_t* buffer, uint32_t size) {

}