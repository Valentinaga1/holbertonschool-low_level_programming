#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup -  function that returns a pointer to a newly allocated space
 *in memory, which contains a copy of the string given as a parameter.
 * @str: string is going to be copy
 * Return: a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
		while (str[len] != '\0')
	{
		len++;
	}
	len = len + 1;
	copy = malloc(len * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		copy[len] = str[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
