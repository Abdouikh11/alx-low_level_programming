#include "function_pointers.h"

/**
 * array_iterator - function escute a function given
 * @array: the array to iterate
 * @size: size of the array
 * @action: the function to excute on each element on the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
