#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value into the array
 * @max: the maximum value to include in the arrray
 * Return: returns the pointer or NULL
 *
 */

int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		p[i] = min + i;
	return (p);
}
