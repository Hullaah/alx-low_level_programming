#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory from the heap for a two dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to two dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(sizeof(int) * width);
		if (grid[k] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
