#include "function_pointers.h"
/**
 * int_index - finds the index of array element for
 * which cmp function returns true
 * @array: array
 * @size: size of array
 * @cmp: function to use to find array element which returns true
 * Return: element index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		if (size < 1)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
			return (-1);
	}
		return (-1);
}
