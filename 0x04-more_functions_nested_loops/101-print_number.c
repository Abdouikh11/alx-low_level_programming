#include "main.h"

/**
 * print_number - Function that prints an integer
 * Return: 0
 * @n: the number we put
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
