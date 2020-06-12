#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y = 48;

	while (y <= 57)
	{
	putchar(y);
	if (y == 57)
	{
	}
	else
	{putchar(',');
	putchar(' ');
	}
	y++;
	}

	putchar('\n');
	return (0);
}
