#include <stdio.h>
/**
 * main - rogram that prints the numbers from 1 to 100, followed by a new line.
 * for multiples of 3 print Fizz and for the multiples of 5 print Buzz.
 * For numbers which are multiples of both 3 and 5 print FizzBuzz.
 * Return: Always 0.
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			putchar(' ');
		}
		n++;
	}
		putchar('\n');
		return (0);
}
