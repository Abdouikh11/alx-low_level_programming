#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in the array
 * @array: array to search in it
 * @size: the size of the array
 * @cmp: comparaison function that we use
 * Return: returns the index
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
