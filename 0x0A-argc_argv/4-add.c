#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 * @argc: number of arguments.
 * @argv: argument vecotr
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;
	int j = 0;

	if (argc > 1)
	{
		while (argc > i)
		{
			sum = sum + atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);

		while (isdigit(argv[i][j]) == 0)
		{
			printf("Error\n");
			return (1);
			j++;
		}
	}
	else
	{
			printf("0\n");
	}
	return (0);
}
