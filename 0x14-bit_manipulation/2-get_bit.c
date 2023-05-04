#include "main.h"
/**
 * get_bit - gets the bit of n at index specified by index
 * @n: number
 * @index: bit index
 * Return: bit at index specified by index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int i = (n >> index) & 1;

	if (index >= sizeof(unsigned long int) * 8)
        	return (-1);
	return (i);
}
