#include "holberton.h"
/**
 * _puts -  prints a string, followed by a new line.
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
/*Anohter  way: bassically the only thing is changing is the way you can write a string,
you can write it like this str[i] or like *(str + i) in case you want to go over the string.
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');*/
