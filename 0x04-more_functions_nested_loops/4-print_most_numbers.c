#include "main.h"

/**
 * print_most_numbers - Function that prints numbers from 0 to 9 without 2 & 4
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + 48);
	}
	_putchar('\n');
}
