#include "holberton.h"
/**
*times_table - prints each minute of Jacks Bauer day
*
* Return: returns each minute in a specific day
*/
void times_table(void)
{
	int h;
	int v;
	int m;

	v = 0;
	while (v < 10)
	{
		h = 0;
		while (h < 10)
		{
			m = h * v;
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			h++;
			if (h != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		v++;
		_putchar('\n');
	}
}
