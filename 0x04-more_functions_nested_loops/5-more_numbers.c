#include "main.h"

/**
 * more_numbers - Function that prints 0 to 14 ten times
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + 48);
			}
			_putchar(n % 10 + 48);
		}
		_putchar('\n');
	}
}
