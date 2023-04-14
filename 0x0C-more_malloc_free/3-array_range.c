#include "main.h"
#include <stdlib.h>

/**
 * array_range - The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * @min: number to start from
 * @max: number to stop at
 * Return: pointer to array
*/
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[i - min] = i;
	}
	return (ptr);
}
