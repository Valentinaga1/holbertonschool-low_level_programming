#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	d = n % 10;
	if (n > 5)
	printf("Last digit of %d and is %d greater than 5\n", n, d);
	else if (n == 0)
	printf("Last digit of %d and is %d 0\n", n, d);
	else
	printf("Las digit od %d and is %d less than 6 and not 0\n", n, d);
	return (0);
}
