#include "main.h"

/**
 * print_numbers - Function that prints number from 0 to 9 only using putchar
 * Returns: Alwyas 0 (Success)
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
