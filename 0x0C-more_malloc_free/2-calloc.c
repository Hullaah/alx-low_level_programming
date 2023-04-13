#include "main.h"
#include <stdlib.h>
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
	return (ptr);
}
