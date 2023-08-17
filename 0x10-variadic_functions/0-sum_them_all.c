#include "variadic_functions.h"

/**
 * sum_them_all - function that sum all parametres
 * @n: the number of paramters
 * Return: return the sum of them
 *
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list pars;
	unsigned  int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(pars, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pars, int);
	va_end(pars);
	return (sum);
}
