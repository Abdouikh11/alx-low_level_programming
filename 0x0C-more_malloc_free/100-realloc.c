#include "main.h"

/**
 * _realloc - Function that realloc a memory block using malloc and free
 * @ptr: pointer to a memory
 * @old_size: size in bytes ofn allocated space of ptr
 * @new_size: new size in bytes of the new memory block
 * Return: pointer to the newly allocated memory or NULL
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp;
	unsigned int i, min_s;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);
	min_s = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_s; i++)
		newp[i] = ((char *)ptr)[i];
	free(ptr);
	return (newp);
}
