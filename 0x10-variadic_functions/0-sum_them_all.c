#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments.
 * 
 * Return: sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arguments;

	va_start(arguments, n);
	
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(arguments, int);
		i++;
	}
	va_end(arguments);
	return (sum);
}
