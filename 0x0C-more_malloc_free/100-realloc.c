#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr:pointer to the memory previously allocated with a call to malloc:
 * malloc(old_size)
 * @old_size:is the size, in bytes, of the allocated space for ptr.
 * @new_size:is the new size, in bytes of the new memory block.
 * Return: reallocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, current_size;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size < old_size)
		current_size = new_size;
	else
		current_size = old_size;
	i = 0;
	while (i < current_size)
	{
		p[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (p);
}
