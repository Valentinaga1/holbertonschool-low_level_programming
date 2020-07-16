#include "3-calc.h"
/**
 * main - check the code
 * @argc: cantidad de arguments
 * @argv: argumentos
 * Return:0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
			&& *argv[2] != '/' &&  *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
