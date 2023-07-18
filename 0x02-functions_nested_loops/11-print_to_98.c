#include "main.h"

/**
 * print_to_98 - the fucntion prints from a specfique number to 98
 * Return: Always 0 (Success)
 * @n: the number that we add
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
