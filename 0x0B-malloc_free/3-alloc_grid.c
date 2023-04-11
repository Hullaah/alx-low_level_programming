#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int *grid;
	int i,j;
	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int) * width * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(grid + (i * width) + j) = 0;
		}
		
	}
	return (grid);
}