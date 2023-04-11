#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and initializes it with a
 * specific char
 * @size: size of array to create
 * @c: char to fill array with
 * Return: pointer to created array
*/

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
		return (NULL);
	string = malloc(size);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		string[i] = c;
	return (string);
}
