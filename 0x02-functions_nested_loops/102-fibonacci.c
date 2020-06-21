#include <stdio.h>
/**
*main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
*followed by a new line.
* Return: returns each minute in a specific day
*/
int main(void)
{

	int n = 1;
	long fn;
	long fn1 = 0;
	long fn2 = 1;

		while (n < 50)
		{
			fn = fn1 + fn2;
			fn1 = fn2;
			fn2 = fn;
			if (n != 49)
			{
			printf("%ld, ", fn);
			}
			else
			{
			printf("%ld\n, ", fn);
			}


		n++;
		}
		return (0);
}
