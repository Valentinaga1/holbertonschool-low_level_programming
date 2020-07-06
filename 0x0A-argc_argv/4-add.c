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
	int i, j, sum = 0;

	i = 1;
	while (argc > i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);

}
