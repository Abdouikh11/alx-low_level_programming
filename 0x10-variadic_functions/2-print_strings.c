#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be betwen numbers
 * @n: numbers of integers
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list aargs;
	unsigned int i;

	va_start(aargs, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(aargs, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(aargs);
}
