#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: memory filled
 * @b: value to be set to
 * @n: number of bytes of memory to fill
 * Return: pointer to memory area s
*/
char *_memset(void *s, unsigned int b, unsigned int n)
{
	unsigned int i;
	unsigned char *p = (unsigned char *)s;
	unsigned char v = (unsigned char)b;

	for (i = 0; i < n; i++)
	{
		*p++ = v;
	}

	return (s);
}

/**
 * _calloc - works just like the standard library calloc
 * @nmemb: number of items to allocate memory for
 * @size: size of each element
 * Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
