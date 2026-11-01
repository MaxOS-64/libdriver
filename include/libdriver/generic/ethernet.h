/**
 * @file ethernet.h
 * @brief Defines an EthernetDriver class for managing Ethernet communication, including sending and receiving data, handling MAC addresses, and event management.
 *
 * @date 1st December 2022
 * @author Max Tyson
 */

#ifndef LIBDRIVER_GENERIC_ETHERNET_H
#define LIBDRIVER_GENERIC_ETHERNET_H

#include <cstdint>

#include <libdriver/driver.h>


namespace LibDriver::generic {

	/**
	 * @class EthernetDriver
	 * @brief Driver for the Ethernet Controller, manages the sending and receiving of data, the mac address, and the events
	 */
	class Ethernet : public LibDriver::Driver {

		public:
			Ethernet();
			~Ethernet();

            virtual uint64_t get_mac_address();

	        virtual void send(MaxOS::common::byte_span_t data);
	};

}


#endif //LIBDRIVER_GENERIC_ETHERNET_H
