#include "dog.h"
/**
 *init_dog - initoalises a dog struct
 *@d: dog struct
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: void (does not have a return value)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL || name != NULL || owner != NULL || age != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
