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
	{
		printf("nil");
		return;
	}
	printf("%s", cadena);
}
/**
 * print_all - Prints all the types
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *form = (char *) format;
	char *separador = "";

	Myp types[] = {
		{"c", printChar},
		{"i", printInteger},
		{"f", printFloat},
		{"s", printString},
		{'\0', '\0'}
	};

	va_start(args, format);

	while (*form != '\0' && format != NULL)
	{
		i = 0;
		while (types[i].tipo)
		{
			if (*form == types[i].tipo[0])
			{
				printf("%s", separador);
				types[i].f(args);
				separador = ", ";
			}
			i++;
		}
		form++;
	}
	va_end(args);
	printf("\n");
}
