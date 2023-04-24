#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
/**
 * chars - Makes the sum of two numbers
 * @c: First operand
 *
 * Return: The sum of the two parameters
 */
int chars(char c)
{
	if (tolower(c) >= 'A' || tolower(c) <= 'z')
		return (1);
	else
		return (0);
}
/**
 * _strlen_recursion - Prints a string using printf
 * @s: The string to be printed
 * Return: The sum of the two parameters
 */
int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
		return (0);
	return (chars(s[0]) + _strlen_recursion(s + 1));
}
