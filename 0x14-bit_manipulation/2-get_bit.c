/**
*get_bit - return a specific bit
*
*@bits : the specific bit
*@index : the index
*@n : the number
* Return : the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bits;

bits = (n >> index) & 1;
return (bits);
}
