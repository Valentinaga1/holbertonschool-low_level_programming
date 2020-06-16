#include "holberton.h"
/**
*print_alphabet - prints the alphabet.
*
* Return: Always 0.
*/
void print_alphabet(void)
{

	int c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
