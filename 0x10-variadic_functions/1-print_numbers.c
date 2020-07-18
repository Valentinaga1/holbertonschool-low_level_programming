#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator:string to be printed between numbers
 * @n:number of integers passed to the function
 * Return: is a void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int i;
	int number;

	va_start(argumentos, n);

	i = 0;
	while (i < n)
	{
		number = va_arg(argumentos, int);
		printf("%d", number);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	i++;
	}
	printf("\n");
	va_end(argumentos);
}
