#include "variadic_functions.h"

/**
 * print_all - function variadic that prints anything
 * @format: that strings that we add
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;	
	unsigned int i = 0;
	char c;
	const char *separator = "";

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					char *s = va_arg(args, char *);

					if (s == NULL)
						printf("(nil)");
					else
						printf("%s%s", separator, s);
					break;
				}
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
