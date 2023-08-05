#include "main.h"

/**
 * _memset - function that fills a memory with a constant byte
 * @s: the string as a pointer to the memory area
 * @b: constant byte
 * @n: numbers of bytes
 * Return: returns a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
