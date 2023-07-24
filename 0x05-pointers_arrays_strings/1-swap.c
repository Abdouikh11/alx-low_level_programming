#include "main.h"

/**
 * swap_int - Function that swaps tow variables a and b
 * @a: the first number
 * @b: the second number
 **/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
