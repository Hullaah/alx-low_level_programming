#include "main.h"
/**
 * clear_bit - sets the bit at index to 0
 * @n: number
 * @index: index at which bit is located
 * Return: 1 if succesful and -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1, j = *n;
	unsigned int k = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	while (k != index)
	{
		j >>= 1;
		i <<= 1;
		k++;
	}
	if (j & 1)
		*n = *n - i;
	return (1);
}
