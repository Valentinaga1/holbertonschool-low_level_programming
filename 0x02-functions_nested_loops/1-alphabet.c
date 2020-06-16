#include <stdio.h>
#include "holberton.h"
/**
*print_alphabet - prints the alphabet.
*
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
