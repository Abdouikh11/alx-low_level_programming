#include "main.h"

/**
 * _strncat - function that concatenate two strings
 * @dest: the destination string as a pointer
 * @src: the source string  as pointer
 * @n: the first characters in the strings of src
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (; *ptr != '\0'; ptr++)
	{
	}
	for (i = 0; i < n && *src != '\0'; i++, ptr++, src++)
	{
		*ptr = *src;
	}
	*ptr = '\0';
	return (dest);
}
