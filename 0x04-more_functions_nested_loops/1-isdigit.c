#include <stdio.h>
#include "holberton.h"
/**
*_isdigit - checks if c is  a digit between 0 and 9.
*@c: is the input character
*Return: 1 if is uppercase or 0 if is not.
*/
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
	return (1);
	}
	else
	return (0);
}
