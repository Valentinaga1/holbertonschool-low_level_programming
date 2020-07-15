#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name -  function that prints a name.
 * @name: name to print
 * @f: pointer to a function that pints name
 * Return: Void;
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
		(*f)(name);
	else
		return;
}
