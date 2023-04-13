#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  works just like malloc
 * @b: amount to be allocated
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
