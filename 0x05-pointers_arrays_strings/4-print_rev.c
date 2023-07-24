#include "main.h"

/**
 * print_rev - function that prints rev of a string
 * @s: The string
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
