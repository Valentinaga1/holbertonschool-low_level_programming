#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: elements of the array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

  i = 0;
	n = n - 1;
  while (i <= n)
  {
		r = a[i];
		a[i] = a[n];
		a[n] = r;
		i++;
		n--;
	}
}