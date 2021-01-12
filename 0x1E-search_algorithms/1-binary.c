#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: the first index where value is located or -1 if it doesn´t find it
 * Return: Always EXIT_SUCCESS
 */

 int binary_search(int *array, size_t size, int value){
	if (array == NULL)
		return(-1);
	return (binarySearch(array, value, 0, size - 1));
 }

 int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
 }