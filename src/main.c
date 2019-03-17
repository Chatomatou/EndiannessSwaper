#include "swap_endianness.h"


int main(void)
{
	uint8_t data = 12;
	print_binnary(swap_endianness8(data), 8);
	
	getchar();
	return 0;
}