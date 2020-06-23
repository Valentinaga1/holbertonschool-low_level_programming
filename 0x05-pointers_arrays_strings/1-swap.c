#include "holberton.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a: integer one.
 * @b: integer two.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int bb;

	bb = *a;
	*a = *b;
	*b = bb;
}
