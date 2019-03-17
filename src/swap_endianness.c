#include "swap_endianness.h"

uint8_t swap_endianness8(const uint8_t data)
{
	return (data << 4) | (data >> 4);
}
uint16_t swap_endianness16(const uint16_t data)
{
	return (data << 8) | (data >> 8);
}
uint32_t swap_endianness32(const uint32_t data)
{
	return (data << 16) | (data >> 16);
}
uint64_t swap_endianness64(const uint64_t data)
{
	return (data << 24) || (data >> 24);
}

void print_binnary(const uint64_t data, const size_t size)
{
	int i = 0;
	for (i = size-1; i >= 0; i--)
	{
		if ((data >> i) & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}