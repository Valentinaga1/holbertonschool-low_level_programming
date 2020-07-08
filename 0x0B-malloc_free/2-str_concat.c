#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = " ";

		if (s2 == NULL)
		s1 = " ";

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;

	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat = malloc(((len1 + len2)  + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		concat[len1] = s1[len1];
		len1++;
	}
	len2 = 0;
		while (s2[len2] != '\0')
	{
		concat[len1] = s2[len2];
		len2++;
		len1++;
	}
	return (concat);
}
