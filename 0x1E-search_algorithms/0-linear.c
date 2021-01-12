#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: the first index where value is located or -1 if it doesn´t find it
 * Return: Always EXIT_SUCCESS
 */
 
 int linear_search(int *array, size_t size, int value){
	size_t i; 
    for (i = 0; i < size; i++) 
        if (array[i] == value) 
            return i; 
    return -1; 
}
