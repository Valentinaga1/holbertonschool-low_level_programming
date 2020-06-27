#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string
 * Return: string encodes.
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
		(s[i] >= 'A' && s[i] <= 'Z'))
		{
			s[i] += 13;
		}
		if ((s[i] >= 'N' && s[i] <= 'Z') ||
		(s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] -= 13;
		}
		i++;
	}
	return (s);
}

