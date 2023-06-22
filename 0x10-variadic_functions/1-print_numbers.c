/**
 * print_numbers - Prints the numbers
 * @separator : the separator between numbers
 * @n : the number if the varadations
 */
#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	int x = va_arg(args, int);

	if (separator == NULL || i == n || i == n - 1)
	printf("%d", x);
	else
	printf("%d%s", x, separator);
	}
	va_end(args);
	printf("\n");
}
