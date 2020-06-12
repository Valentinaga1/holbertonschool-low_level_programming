#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y = 48;
	char x = 'a';

	while (y <= 57)
	{
	putchar(y);
	y++;
	}

	while (x <= 'f')
	{putchar(x);
	x++;
	}

	putchar('\n');
	return (0);
}
