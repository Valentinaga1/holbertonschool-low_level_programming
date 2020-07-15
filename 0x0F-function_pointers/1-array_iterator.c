#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array.
 * @array: given array
 * @size:is s the size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL || array != NULL || size > 0)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
