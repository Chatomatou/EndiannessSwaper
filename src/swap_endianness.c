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
	/*
		octet1 octet2 octet3 octet4
		octet4 octet3 octet2 octet1
	*/
	uint32_t byteA = ((data & 0xff000000) >> 24);
	uint32_t byteB = ((data & 0x00ff0000) >> 8);
	uint32_t byteC = ((data & 0x0000ff00) << 8);
	uint32_t byteD = ((data & 0x000000ff) << 24);

	return byteA | byteB | byteC | byteD;
}
uint64_t swap_endianness64(const uint64_t data)
{
    uint64_t byteA = (data & 0xff00000000000000u)>> 56u; // octet 1
    uint64_t byteB = (data & 0x00ff000000000000u)>> 40u; // octet 2
    uint64_t byteC = (data & 0x0000ff0000000000u) >> 24u; // octet 3
    uint64_t byteD = (data & 0x000000ff00000000u) >> 8u; // octet 4
    uint64_t byteE = (data & 0x00000000ff000000u) << 8u; // octet 5;
    uint64_t byteF = (data & 0x0000000000ff0000u) << 24u; // octet 6
    uint64_t byteG = (data & 0x000000000000ff00u) << 40u; // octet 7
    uint64_t byteH = (data & 0x00000000000000ffu) << 56u; // octet 8


    return byteA | byteB | byteC | byteD | byteE | byteF | byteG | byteH;
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

void print_hex(const uint64_t data, const size_t size)
{
	switch(size)
	{
	case 1:
		printf("%.2X\n", data);
		break;
	case 2:
		printf("%.4X\n", data);
		break;
	case 4:
		printf("%.8X\n", data);
		break;
	case 8:
		printf("%.16llX\n", data);
		break;
	}
 }
