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
	va_list arguments;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(arguments, int);
		i++;
	}
	va_end(arguments);
	return (sum);
}
