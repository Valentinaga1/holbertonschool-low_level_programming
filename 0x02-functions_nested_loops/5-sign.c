#include "holberton.h"
/**
*print_sign - prints the sign of a number.
*@n: is the input character
* Return: 0 if is zero , 1 if is positive and -1 if is negative.
*/
int print_sign(int n)
{
	while (n > 0)
	{
	_putchar('+');
	return (1);
	}
	while (n == 0)
	{
	_putchar('0');
	return (0);
	}
	while (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	_putchar('\n');
	return (0);
}
