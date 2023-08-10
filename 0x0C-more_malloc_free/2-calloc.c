#include "main.h"

/**
 * _calloc - Function that allocates memory of an array using malloc
 * @nmemb: number of ellemnts  in the array
 * @size: size of elements in bytes
 * Return: returns pointer or NULL if fails
 *
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, total_s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_s = nmemb * size;
	p = malloc(total_s);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < total_s; i++)
		p[i] = 0;
	return (p);
}
