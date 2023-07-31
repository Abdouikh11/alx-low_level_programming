#include "main.h"

/**
 * _strchr - Function that locates a charactere in a string
 * @s: pointer to the string
 * @c: the character that we want to locate
 * Return: returns a pointer to the first occourance
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ((c == '\0') ? s : NULL);
}
