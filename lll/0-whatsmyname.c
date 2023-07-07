/**
 * main - print the name of the code
 *
 *@argc: argument counter
 *@argv: argument vector
 * Return: 0.
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	}
	return (0);
}

