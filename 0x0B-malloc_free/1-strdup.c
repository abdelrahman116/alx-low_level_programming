#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - return a dupliacat of str
 *str : is a string
 *Return: ar
*/
char *_strdup(char *str)
{
	char*ar = str;
	ar = malloc(sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	return (ar);
}
