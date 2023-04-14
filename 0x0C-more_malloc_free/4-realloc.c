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


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;
	int i;

	if (new_size == old_size)
		return ptr;
	if (ptr == NULL)
	{
		/*free(ptr);*/
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
}
