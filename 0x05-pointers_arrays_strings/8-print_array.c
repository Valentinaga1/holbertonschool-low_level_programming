#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: array a[]
 * @n: n elements of an array.
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
		else
		{
		}
		i++;
	}
	printf("\n");
}
