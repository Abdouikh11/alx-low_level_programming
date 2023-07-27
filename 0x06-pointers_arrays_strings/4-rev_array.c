#include "main.h"

/**
 * reverse_array - Function that's reverse an array
 * @a: The array integer as a pointer
 * @n: The number of elements of the array
 *
 ****/

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
