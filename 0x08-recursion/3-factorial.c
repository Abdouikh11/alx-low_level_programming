#include "main.h"

/**
 * factorial - function that retrun the factorial of an integer
 * @n: the integer to input
 * Return: the factorial of the integer
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if(n == 1 || n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
