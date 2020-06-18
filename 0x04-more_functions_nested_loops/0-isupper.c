	#include <stdio.h>
#include "holberton.h"
/**
*_isupper - Checks without a character is of uppercase type.
*@c: is the input character
* Return: Always 0.
*/
int _isupper(int c)
{
	if ((c >= 0101) && (c <= 0132))
	{
		return (1);
	}
	else
	return (0);
}
