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

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					char *s = va_arg(args, char *);

					if (s == NULL)
						printf("(nil)");
					else
						printf("%s", s);
					break;
				}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
