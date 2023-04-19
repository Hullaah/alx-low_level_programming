#include "function_pointers.h"
#include <stdint.h>
/**
 * array_iterator - iterates an array and carry out action on array
 * @array: array
 * @size: array size
 * @action: pointer to function for action to be carried out on element
 * Return: void (does not have a return value)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
