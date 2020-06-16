#include "holberton.h"
/**
 *print_alphabet_x10 - Prints the alphabet 10 times0
 *
 * Return: always 0
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
		_putchar('\n');
	y++;
	x = 'a';
	}
}
