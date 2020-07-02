#include "holberton.h"
/**
 * _pow_recursion - function that returns the value of x raised to the
 * power of y.
 * @x: number
 * @y:power of
 * Return: value of x
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	n = (x * _pow_recursion(x, y - 1));
	return (n);
}
