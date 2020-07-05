#include <stdio.h>
#include <stdlib.h>
/**
 * main - tprogram that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: argument vecotr
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int m = 0;
	int i = 0;

	if (argc > 1)
	{
		m = ((atoi(argv[i + 1]) * atoi(argv[i + 2])));
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
		return (0);
}
