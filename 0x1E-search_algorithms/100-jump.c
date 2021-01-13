#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: the first index where value is located or -1 if it doesn´t find it
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), i, x;

	if (array == NULL)
		return (-1);

	i = 0;
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	while (step < size && array[step] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		i = step;
		step += sqrt(size);
	}
	printf("Value found between indexes[%ld] and [%ld]\n", i, step);

	if (step > size - 1)
		return (-1);

	for (x = i; x <= step; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
