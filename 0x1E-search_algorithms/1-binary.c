#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: the first index where value is located or -1 if it doesn´t find it
 * Return: Always EXIT_SUCCESS
 */

 int binary_search(int *array, size_t size, int value)
 {
	int low = 0;
	int high = size - 1;
	int mid, i;

	if (array == NULL)
		return(-1);

	while (low <= high) {
		printf("Searching in array: ");

		for(i= low; i <= high; i++)
			printf("%d, ", array[i]);
		printf("\n");

		mid = (high + low) / 2;

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return -1;
 }