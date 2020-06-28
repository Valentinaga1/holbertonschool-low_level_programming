#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: destiantion
 * @src: origin
 * @n: size bytes
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (n > j)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
