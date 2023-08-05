#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: The destination string as a pointer
 * @src: the source string as a pointer
 * @n: The maximum number of bytes to copy
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++, p++, src++)
	{
		*p = *src;
	}
	for (; i < n; i++, p++)
	{
		*p = '\0';
	}
	return (dest);
}
