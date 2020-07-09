#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: elements of the array are going to be allocate in memory
 * @size: size on bytes
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = 0;
	unsigned int i;


	if ((nmemb == 0) && (size == 0))
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while ((nmemb * size) > i)
	{
		i++;
	}
	return (p);
}
