#include <stdio.h>
#include "holberton.h"
/**
*print_diagonal - draws a diagonal line on the terminal.
*@n: input number.
*/
void print_diagonal(int n)
{
	int b, e;

		if (n <= 0)
	{
		_putchar('\n');
	}
		e = 0;
		while (e < n)
		{
			b = 0;
			while (b < e)
			{
				_putchar(' ');
				b++;
			}
					_putchar('\\');
					_putchar('\n');
		e++;
		}
}
