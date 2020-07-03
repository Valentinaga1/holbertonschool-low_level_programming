#include "holberton.h"
/**
 * mitad - half of a number
 * @a: number n.
 * @b: root
 * Return: root of a number a
 */
int mitad(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (a < 0 || b * b > a)
	{
		return (-1);
	}
	return (mitad(a, b + 1));
}
#include "holberton.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a nuaaer.
 * @n: number.
 * Return: root of a number n
 */
int _sqrt_recursion(int n)
{
	return (mitad(n, 1));
}
