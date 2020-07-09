#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: first n bytes of s2
 * Return: pointer which cointains s1 followed by the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *S;
	unsigned int i1, i2;

	i1 = 0;
	while (s1[i1] != '\0')
	{
		i1 = i1 + 1;
	}
	i2 = 0;
	while (s2[i2] != '\0' && n > i2)
	{
		i2 = i2 + 1;
	}
	if (n >= i2)
	{
		n = i2;
	}
	S = malloc((i1 + i2 + 1) * sizeof(char));
	if (S == NULL)
	{
		return (NULL);
	}
	i1 = 0;
	while (s1[i1] != '\0')
	{
		S[i1] = s1[i1];
		i1++;
	}
	i2 = 0;
	while (s2[i2] != '\0' && n > i2)
	{
		S[i1] = s2[i2];
		i2++;
		i1++;
	}
	S[i1] = '\0';
	return (S);
}
