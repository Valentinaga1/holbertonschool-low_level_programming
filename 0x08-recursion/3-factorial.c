#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n:number.
 * Return: when n < 0 returns -1 to indicate is an error.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0 )
	{
		return (-1);
	}
	n = n * factorial((n - 1));
	return (n);
}
