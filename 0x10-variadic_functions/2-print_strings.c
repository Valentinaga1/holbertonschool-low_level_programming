#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings- Function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: is a void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int i;
	char *string; /*Ya sabe hasta donde va la cadena*/

	va_start(argumentos, n);

	i = 0;
	while (i < n)
	{
		string = va_arg(argumentos, char *);/*este es el incremento por sí solo*/
		if (separator == NULL)
			return;
		if (string == NULL)
			printf("nil");
		if (i < n)
			printf("%s", string);
		if (i < (n - 1))
			printf("%s", separator);
	i++;
	}
	printf("\n");
	va_end(argumentos);
}
