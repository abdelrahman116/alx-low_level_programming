#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - duplicat a string
 *@str: The size of the array
 *
 * Return: A.
 */
char *_strdup(char*str)
{
	char *result;

	result = (char*)malloc(strlen(str)*sizeof(char));
	if (result == NULL)
	return (NULL);
	result = str;
	return (result);
	free(result);
}
