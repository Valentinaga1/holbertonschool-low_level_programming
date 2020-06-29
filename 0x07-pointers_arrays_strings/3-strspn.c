#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: segment two
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int l;

	l = 0;
	j = 0;
	while (s[j] != '\0')
	{
		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] == accept[j] && l <= i)
			{
				l = l + 1;
			}
			i++;
		}
		j++;
	}
	return (l);
}
