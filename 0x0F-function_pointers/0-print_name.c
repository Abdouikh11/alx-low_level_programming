#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: the pointer to string as a name
 * @f: function that use to print the name
 *
 *
 ***/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
