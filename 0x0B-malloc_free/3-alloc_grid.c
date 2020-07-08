#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers..
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer ro a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr, w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (h < height)
	{
		arr[h] = malloc(width * sizeof(int));
		while (w < width)
		{
			arr[h][w] = 0;
			w++;
		}
		h++;
	}
	return (arr);
}
