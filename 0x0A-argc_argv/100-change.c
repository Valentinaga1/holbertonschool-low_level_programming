#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins to make cent
 *for an amount of money.
 * @argc: number of arguments.
 * @argv: argument vecotr
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i = 1, cent = 0, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[i]) < 0)
	{
		printf("0\n");
		return (0);
	}
	if (atoi(argv[i]) % 25 >= 0)
	{
		cent = cent + (atoi(argv[i]) / 25);
		change = (atoi(argv[i]) % 25);
	}
	if (change % 10 >= 0)
	{
		cent = cent + (change / 10);
		change = (atoi(argv[i]) % 10);
	}
	if (atoi(argv[i]) % 5 >= 0)
	{
		cent = cent + (change / 5);
		change = (atoi(argv[i]) % 5);
	}
	if (atoi(argv[i]) % 2 >= 0)
	{
		cent = cent + (change / 2);
		change = (atoi(argv[i]) % 2);
	}
	if (atoi(argv[i]) % 1 >= 0)
	{
		cent = cent + (change / 1);
	}
	printf("%d\n", cent);
	return (0);
	}
