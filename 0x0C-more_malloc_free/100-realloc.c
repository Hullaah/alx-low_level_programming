#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to be copied
 * Return: memory copied to
*/
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *dst_ptr = dest;
	const char *src_ptr = src;

	while (n--)
	{
		*dst_ptr++ = *src_ptr++;
	}
	return (dest);
}
/**
 * _realloc - works just like the standard library c realloc
 * @ptr: pinter to be reallocated
 * @old_size: old allocated size
 * @new_size: new allocated size
 * Return: pointer to allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;


	if (new_size == old_size)
		return (ptr);
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
	tmp = malloc(new_size);
	_memcpy(tmp, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (tmp);
}
