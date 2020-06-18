#include <stdio.h>
#include "holberton.h"
/**
*more_numbers - prints the numbers, from 0 to 14, followed by a new line.
*print it ten times.
*/
void more_numbers(void)
{
	int x;
	int n;

	for (x = 0; x < 9; x++)
	{
	for (n = 0; n <= 14; n++)
		{
		if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(n + '0');
		}
		}
			_putchar('\n');
	}

}
