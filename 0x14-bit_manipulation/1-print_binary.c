#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (mask > 0 && !(n & mask))
	{
	mask >>= 1;
	}
	while (mask > 0)
	{
		putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}
