#include <stdio.h>
#include "holberton.h"

/**
*_isalpha - Checks if the character is alphabetic or numeric.
*@c: is the input character
* Return: 0 if is a numbre and 1 if is character.
*/
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
	return (1);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
