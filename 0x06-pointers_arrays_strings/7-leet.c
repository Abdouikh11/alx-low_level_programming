#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @a: The string as a pointer
 * Return: Returs a pointer of the results
 *
 */

char *leet(char *a)
{
	char *ptr = a;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i / 2];
				break;
			}
		}
		ptr++;
	}
	return (a);
}
