#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to be copied
 * Return: memory copied to
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
