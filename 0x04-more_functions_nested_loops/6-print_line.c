#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 * Return : Always 0 (Success)
 * @n: number of the straight line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
