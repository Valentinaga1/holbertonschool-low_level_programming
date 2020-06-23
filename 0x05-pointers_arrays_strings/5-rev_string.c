#include "holberton.h"
/**
 * rev_string - reverses a string(different to print)
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0; /*contador cadena al derecho*/
	int j = 0; /*contador cadena al revés*/
	int tmp;

	while (s[i] != 0)
	{
		i++;
	}
	i = i - 1; /*para que no entre con el nulo*/
	while (j <= i)
	{	
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
