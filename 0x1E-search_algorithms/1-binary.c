#include "search_algos.h"

/**
 * print_array - prints an array of integers demiliting each element with a
 * commma
 * @array: array to be printed
 * @size: size of the array
 * Return: void (does not have a return value)
*/
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i != size - 1 ? ", " : "\n");
}

/**
 * binary_search - an implementation of the binary search algorithm
 * @array: array to be searched in
 * @size: size of array to be searched
 * @value: value to search for in array
 * Return: first index of @value on success. -1 on failure
 *
 * Description: uses binary search to find an element in an array
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start, stop, mid;

	start = 0;
	stop = size;
	mid = (start + stop) / 2;
	if (!array)
		return (-1);
	while (1)
	{
		printf("Searching in array: ");
		print_array(array + start, stop - start);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			stop = mid;
			mid = (start + mid) / 2;
			if (value < array[0])
				return (-1);
		}
		else
		{
			start = mid;
			mid = (mid + stop) / 2;
			if (value > array[size - 1])
				return (-1);
		}
	}
	return (0);
}
