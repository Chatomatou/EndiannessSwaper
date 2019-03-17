#include "swap_endianness.h"


int main(void)
{
	uint64_t dataA = 0xff00000000000000;
	uint32_t dataB = 0xff000000;
	uint16_t dataC = 0xff0A;
	uint8_t dataD = 0xfa;

	// 64 bits 

	printf("64 bits : \n");
	print_hex(dataA, sizeof(dataA));
	print_hex(swap_endianness64(dataA), sizeof(dataA));

	print_binnary(dataA, sizeof(dataA) * 8);
	print_binnary(swap_endianness64(dataA), sizeof(dataA) * 8);

	// 32 bits

	printf("32 bits : \n");

	print_hex(dataB, sizeof(dataB));
	print_hex(swap_endianness32(dataB), sizeof(dataB));

	print_binnary(dataB, sizeof(dataB) * 8);
	print_binnary(swap_endianness32(dataB), sizeof(dataB) * 8);
	
	// 16 bits

  	printf("16 bits : \n");

	print_hex(dataC, sizeof(dataC));
	print_hex(swap_endianness16(dataC), sizeof(dataC));

	print_binnary(dataC, sizeof(dataC) * 8);
	print_binnary(swap_endianness16(dataC), sizeof(dataC) * 8);

	// 8 bits 
 	printf("8 bits : \n");

	print_hex(dataD, sizeof(dataD));
	print_hex(swap_endianness8(dataD), sizeof(dataD));

	print_binnary(dataD, sizeof(dataD) * 8);
	print_binnary(swap_endianness8(dataD), sizeof(dataD) * 8);
	return 0;
}