#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguments.
 * @argv: argument vecotr
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int	i = 0;

	while (argc > i)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
