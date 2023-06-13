#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates an array
 *@str: The size of the array
 *
 * Return: c.
 */
char *_strdup(char *str)
{
	char *c;

	if (strlen(str) == 0)
	return (NULL);
	c = (char *)malloc(strlen(str) * sizeof(char));
	c = (str);
	return (c);
}
