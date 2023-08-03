#include "main.h"

/**********/
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n does no natural square root
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds the natural square root of a number
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}
