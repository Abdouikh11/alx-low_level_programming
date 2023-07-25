#include "main.h"

/**
 * puts_half - Fucntion that prints the second half of a string
 * @str: pointer to the string to print
 *
 *
 */

void puts_half(char *str)
{
	int len, n, start, i;

	len = strlen(str);
	n = (len - 1) / 2;
	start = (len % 2 == 0) ? len / 2 : n + 1;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
