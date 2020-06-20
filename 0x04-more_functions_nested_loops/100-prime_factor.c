#include <stdio.h>
/**
 *main-prints number 01 to 89
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
		f++;
		if (n == 1)
		{
			printf("%li \n", f);
		}
	}
		return (0);
}
