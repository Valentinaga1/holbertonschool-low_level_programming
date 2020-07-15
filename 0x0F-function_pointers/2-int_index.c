#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index -function that searches for an integer.
 * @array: given array
 * @size:is the number of elements in the array array
 * @cmp:is a pointer to the function to be used to compare values
 * Return:  the index of the first element for which the cmp function does
 *  not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	signed int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
			i++;
		}
	}
return (-1);
}
