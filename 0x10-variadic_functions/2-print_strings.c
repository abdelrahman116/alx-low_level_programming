/**
 * print_strings - Prints the strings
 * @separator : the separator between strings
 * @n : the number of the varadations
 */
#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
for (i = 0; i < n; i++)
{
	char *x = va_arg(args, char*);

	if (x == NULL)
	printf("nil");
	else if (separator == NULL || i == n || i == n - 1)
	printf("%s", x);
	else
	printf("%s%s", x, separator);
}
va_end(args);
printf("\n");
}
