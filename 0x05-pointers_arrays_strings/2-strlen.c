#include "holberton.h"
/**
 * _strlen -   returns the length of a string.
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	i++;
	return (i);
}
/*Another way to solve it. REMEMBER: Null is the end of a string and it is implicit ,so
the condition while (*(s + i)) is saying that is different to null or != 0.
REMEMBER: You can write a string like char s[i] or like char *(s+i).
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}*/
