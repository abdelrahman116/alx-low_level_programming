/**
 * create_array - creates an array
 *@size: The size of the array
 *@c: The charactars of the array
 *
 * Return: A.
 */
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *A;
	int i;

	if (size <= 0)
	return (NULL);
	A = (char *)malloc(size * sizeof(char));
	for (i = 0 ; (unsigned int) i < size ; i++)
	A[i] = c;
	return (A);
}
