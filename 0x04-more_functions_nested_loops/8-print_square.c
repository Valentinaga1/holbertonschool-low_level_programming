#include <stdio.h>
#include "holberton.h"
/**
*print_square - draws an square.
*@size: size of square.
*/
void print_square(int size)
{
	int l1;
	int l2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	l1 = 1;

	while (l1 <= size)
	{
		l2 = 1;

		while (l2 <= size)
		{
			_putchar('#');
			l2++;
		}
		_putchar('\n');
		l1++;
	}
}
