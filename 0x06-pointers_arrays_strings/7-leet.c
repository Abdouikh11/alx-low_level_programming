#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @a: The string as a pointer
 * Return: Returs a pointer of the results
 *
 */

char *leet(char *a)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s1[j])
			{
				a[i] = s2[j];
			}
		}
	}
	return (a);
}

