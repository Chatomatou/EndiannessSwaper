#ifndef __SWAP__ENDIANNESS__H__
#define __SWAP__ENDIANNESS__H__

#include <stdio.h>
#include <stdint.h>
 

extern uint8_t swap_endianness8(const uint8_t data);
extern uint16_t swap_endianness16(const uint16_t data);
extern uint32_t swap_endianness32(const uint32_t data);
extern uint64_t swap_endianness64(const uint64_t data);


extern void print_binnary(const uint64_t data, const size_t size);
extern void print_hex(const uint64_t data, const size_t size);

#endif 