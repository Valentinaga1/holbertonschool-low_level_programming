#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s:string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		 s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
