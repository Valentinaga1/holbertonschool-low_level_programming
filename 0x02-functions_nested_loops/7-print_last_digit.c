#include "holberton.h"
/**
*print_last_digit - prints the last digit of a number..
*
*@n: input number
* Return: the last digit of a number..
*/
int print_last_digit(int n)
{
	int u = n % 10;

	if (n < 0)
	{
	_putchar(-u + '0');
	return (-u);
	}
	else
	{
	_putchar(u + '0');
	return (u);
	}
}
