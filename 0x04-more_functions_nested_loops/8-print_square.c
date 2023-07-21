#include "main.h"

/**
 * print_square - Function that's prints the square
 * Return: 0 alwyas success
 * @size: the number that we are gonna square
 *
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');


}
