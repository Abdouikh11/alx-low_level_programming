#include "main.h"

/**
 * _pow_recursion - function that returns x raised to power of y
 * @x: the base integer
 * @y: the exponent
 * Return: returns the power recursion or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
