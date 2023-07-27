#include "main.h"

/**
 * string_toupper - function that converts lowercases to uppercases
 * @i: the string
 * Return: return the pointer that modified
 *
 */

char *string_toupper(char *i)
{
	char *ptr = i;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (i);

}
