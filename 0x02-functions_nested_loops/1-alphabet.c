#include <stdio.h>
#include "holberton.h"
/**
 *_alphaber - prints de alphabet.
 *@c: is the input character.
 * Return: Always 0.
 */
void print_alphabet(void)
{

	int x = 'a';

	while (x <= 'z')
	{
	_putchar(x);
	x++;
	}
	putchar('\n');
}
