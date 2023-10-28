#include "main.h"
/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: returns the converted number or 0
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = 2 * n + (*b++ - '0');
	}
	return (n);
}
