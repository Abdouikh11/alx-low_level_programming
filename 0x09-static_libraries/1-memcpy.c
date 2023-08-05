#include "main.h"

/**
 * _memcpy - Function that copy memory area
 * @dest: Destination memory area as a poiner
 * @src: source memory area as apointer
 * @n: the number of bytes in a memory
 * Return: returns destination (dest)
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
