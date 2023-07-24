#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: The string as a pointer
 *
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
