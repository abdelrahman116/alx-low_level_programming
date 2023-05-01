#include "main.h"
#include <stdlib.h>
/**
* create_array - create array of size size and assign char c
* @size: size of array
* @c: char to assign
* Description: creat array of size size and assign char c
* Return: pointer to array, NULL if fail
*
*/
char *create_array(unsigned int size, char c)
{	unsigned int i;
	char *ar;

	ar = malloc(size * (sizeof(char)));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	ar[i] = c;
	return (ar);
}
