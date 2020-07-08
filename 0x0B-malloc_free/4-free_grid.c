#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by
 *  your alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: pointer ro a 2d array
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	if (grid[h] == NULL)
	{
		while (h < height)
		{
			free(grid[h]);
			free(grid);
			h++;
		}
	}
}
