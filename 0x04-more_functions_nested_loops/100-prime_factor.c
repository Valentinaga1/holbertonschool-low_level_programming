#include <stdio.h>
/**
 *main - prints the largest prime factor of the number 612852475143.
 *Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long f = 2;

	while (n != 1)
	{
		if (n % f == 0)
		{
			n = n / f;
		}
		if (n == 1)
		{
			printf("%ld\n", f);
		}
		f++;
	}
		return (0);
}
