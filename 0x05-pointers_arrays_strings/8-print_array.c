#include "main.h"

/**
 * print_array - Fonction that prints n elements of array integers
 * @a: pointer to the array of inetegrs
 * @n: number of element to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
