#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct MyPrintf - Struct for my printf 
 *
 * @tipo: identifier of function to call
 * @f: The function associated
 */
typedef struct MyPrintf
{
	char *tipo;
	void (*f)(va_list);
}Myp;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif 