#include "holberton.h"
/**
*print_triangle - draws a triangle.
*@size: size of square.
*/
void print_triangle(int size)
{
	int f, eb, num;

	if (size > 0)
	{
		f = 1;
		while (f <= size)
		{
			eb = 1;
			while (eb <= size - f)
			{
				_putchar(' ');
				eb++;
			}
			num = 1;
			while (num <= f)
			{
				_putchar('#');
				num++;
			}
			f++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
