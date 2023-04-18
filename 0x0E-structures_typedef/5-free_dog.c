#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees an allocated memory for dog struct
 * @d: dog struct
 * Return: void (does not have a return value)
*/
void free_dog(dog_t *d)
{
	if (d != NULL && d->name != NULL && d->owner != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		exit(1);
}