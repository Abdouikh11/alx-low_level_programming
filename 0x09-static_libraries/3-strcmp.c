#include "main.h"

/**
 * _strcmp - Function that compare two strings
 * @s1: The first string as a pointer
 * @s2: The second string as a pointer
 * Return: returns 0 if they are equal
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
