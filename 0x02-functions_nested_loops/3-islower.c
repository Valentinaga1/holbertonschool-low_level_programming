#include <stdio.h>
#include "holberton.h"
/**
*_islower - Checks without a character is of lowercase type.
*@c: is the input character
* Return: Always 0.
*/
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
	return (1);
	}
	else
	return (0);
}
