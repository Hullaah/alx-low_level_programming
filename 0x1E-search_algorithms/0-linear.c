#include "search_algos.h"
/**
 * linear_search - an implementation of the linear search algorithm
 * @array: array to be searched in
 * @size: size of array to be searched
 * @value: value to search for in array
 * Return: first index of @value on success. -1 on failure
 *
 * Description: uses linear search to find an element in an array
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
