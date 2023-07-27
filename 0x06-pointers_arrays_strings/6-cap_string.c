#include "main.h"

/**
 * cap_string - function that capitilazes all words of the string
 * @a: the string as a pointer
 * Return: the pointer results
 *
 */

char *cap_string(char *a)
{
	char *ptr = a;
	int cap = 1;

	while (*ptr != '\0')
	{
		if (cap && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '\"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}')
		{
			cap = 1;
		}
		else
		{
			cap = 0;
		}
		ptr++;
	}
	return (a);
}
