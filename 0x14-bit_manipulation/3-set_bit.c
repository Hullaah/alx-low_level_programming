#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1, j = *n;
	unsigned int k = 0;

	while (k != index)
	{
		j >>= 1;
		i <<= 1;
		k++;
	}
	if (!(j & 1))
	{
		*n = *n + i;
	}
	return (1);
}
