#include "main.h"
/**
 * get_endianness - checks endianess
 * Return: 0 (big endian) 1 ( small endian)
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *) &num;

	return ((int) *ptr);
}
