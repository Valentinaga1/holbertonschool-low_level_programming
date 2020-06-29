#include "holberton.h"
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i] && needle[j] != '\0' && haystack[i] != '\0')
		{
			if (needle[j + 1] == haystack[i + 1])
			{
				return (haystack + i);
			}
			else
			{
				break;
			}
			j++;
			i++;
		}
		i++;
	}
	return (0);
}
