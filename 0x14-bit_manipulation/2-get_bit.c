/**
*get_bit - return a specific bit
*
*@index : the index
*@n : the number
* Return: the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bits;

if (index > 63)
{
	return (-1);
}
bits = (n >> index) & 1;
return (bits);
}
