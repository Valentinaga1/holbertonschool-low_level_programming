#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int x = 'a';
	int y = 0;

	while (y < 10)
	{
		while (x <= 'z')
		{
		_putchar(x);
		x++;
		}
		 putchar('\n');
	y++;
	x = 'a';
	}
}
