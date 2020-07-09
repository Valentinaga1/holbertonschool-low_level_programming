#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return:  a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, c = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			c++;
	}
	s = malloc((c + i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
