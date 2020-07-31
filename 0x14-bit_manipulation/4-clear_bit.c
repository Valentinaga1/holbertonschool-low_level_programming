#include "holberton.h"
/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: Pointer to a given numbner.
 * @index: Is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	x = x << index;/*2^index*/
	if (index > 64)
		return (-1);
	*n = *n & ~(x);/*n - 2^index */
	return (1);
}
