/**
 * sum_them_all - sum the numbers
 * @n : the number if the varadations
 * Return: the sum.
 */
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	int x = va_arg(args, int);

	sum += x;
	}
	va_end(args);
	return (sum);
}
