#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory allocated to a two dimensional array
 * @grid: Two dimensional array
 * @height: height of array
 * Return: void (does not have a return value)
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
