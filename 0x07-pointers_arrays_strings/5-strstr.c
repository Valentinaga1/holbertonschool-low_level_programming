#include "holberton.h"
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while ((needle[j] != '\0') == (haystack[i] != '\0'))
			{
				i++;
				j++;
				return (needle);
			}
		}
		i++;
	}
	return (0);
}
