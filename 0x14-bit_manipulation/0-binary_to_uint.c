#include <stdio.h>
#include "main.h"
/**
*binary_to_uint-converts from binary to dicimal
*@b: The string of numbers
*Return: the conversion result
*/
unsigned int binary_to_uint(const char *b)
{
        unsigned int x, result = 0;

        if (!b)
                return (0);
        for (x = 0 ; b[x] ; x++)
        {
        if (b[x] > '1' || b[x] < '0')
        return (0);
        result = 2 * result + (b[x] - '0');
        }
        return (result);
}
