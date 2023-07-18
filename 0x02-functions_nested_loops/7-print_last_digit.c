#include "main.h"

/**
 * print_last_digit - Printing the last digit of a number
 * @c: The number that we enter
 * Return: return the number of the last digit
 */
int print_last_digit(int c)
{
	int n = c % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
