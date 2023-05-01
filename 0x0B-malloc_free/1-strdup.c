#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - return a dupliacat of str
 *str : is a string
 *Return: str
*/
char *_strdup(char *str)
{
	str = malloc(sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	return(str);
}
