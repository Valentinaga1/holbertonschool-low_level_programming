#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - function that creates an array of chars, and initializes
 *it with a specific char.
 * @size: specific size
 * @c: specific char
 * Return: NULL if size is cero
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
