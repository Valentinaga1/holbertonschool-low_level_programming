#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * printChar - prints a char
 * @args: argument is going to print
 */
void printChar(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * printInteger - prints an integer
 * @args: argument is going to print
 */
void printInteger(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * printFloat - prints a float
 * @args: argument is going to print
 */
void printFloat(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * printString - prints a string
 * @args: argument is going to print
 */
void printString(va_list args)
{
	char *cadena;

	cadena = va_arg(args, char *);
	if (cadena == NULL)
		printf("nil");
	printf("%s", cadena);
}
/**
 * print_all - Prints all the types
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	Myp types[] = {
		{"c", printChar},
		{"i", printInteger},
		{"f", printFloat},
		{"s", printString},
		{NULL, NULL}
	};

	int i, j;
	char *separador;

	va_list args;

	va_start(args, format);
	i = 0;
	separador = "";

	while (format && format[i])
	{
		j = 0;
		while ((types[j].tipo) != NULL)
		{
			if (format[i] == types[j].tipo[0])
			{
				printf("%s", separador);
				types[j].f(args);
				separador = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
