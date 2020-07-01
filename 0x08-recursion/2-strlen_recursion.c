#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	l = _strlen_recursion(s) + 1;
	return (l);
}
