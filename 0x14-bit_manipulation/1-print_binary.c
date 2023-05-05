#include "main.h"
/**
*print_binary-converts from binary to dicimal
*@n: The string of numbers
*putchar: the conversion result
*/
void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8  - 1);
	for (i = 0; i < sizeof(unsigned long int) * 8 ; i++) {
		putchar((n & mask) ? '1' : '0'); 
		mask >>= 1; 
    }
}
