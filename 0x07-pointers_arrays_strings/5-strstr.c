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
		while (haystack[i] != '\0' && needle[j] != '\0' && needle[j] == haystack[i])
		{
			return (haystack + i);
			i++;
			j++;
		}
		i++;
	}
	return ('\0');
}
