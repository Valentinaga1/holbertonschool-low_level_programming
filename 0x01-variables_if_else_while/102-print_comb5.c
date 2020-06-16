#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i1;
	int i2;
	int i3;

	i1 = 0;
	while (i1 <= 99)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
		i3 = i1 / 10;
		putchar('0' + i3);
		i3 = i1 % 10;
		putchar('0' + i3);
		putchar(' ');
		i3 = i2 / 10;
		putchar('0' + i3);
		i3 = i2 % 10;
		putchar('0' + i3);
		if (i1  == 98 && i2 == 99)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

		i2++;

		}

		i1++;
	}

	return (0);
}
