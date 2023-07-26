#include "main.h"

/**
 * _strcat - Function that concatenate tow strings
 * @dest: the first string as a pointer
 * @src: the second string as a pointer
 * Return: return the dest
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	for (; *dest != '\0'; dest++)
	{
	}
	for (; *src != '\0'; src++, dest++)
	{
		*dest = *src;
	}
	*dest = '\0';
	return (result);
}
