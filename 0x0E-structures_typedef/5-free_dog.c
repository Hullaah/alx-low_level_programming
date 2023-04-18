#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees an allocated memory for dog struct
 * @d: dog struct
 * Return: void (does not have a return value)
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
	else
		exit(0);
}
