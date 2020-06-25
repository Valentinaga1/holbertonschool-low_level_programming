#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: destination string
 * @src: copie string.
 * @n: limit bytes to copy.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (*(src + j) != '\0' && n > j)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	while (n > j)
	{
		*(dest + j) = '\0';
			j++;
	}
return (dest);
}
