#include "main.h"

/**
 * str_concat - Function that concatenate two strings
 * @s1: the first string as a pointer to a string
 * @s2: the second string as pointer to a string
 * Return: retruns the pointer results to the new allocated memory or null
 */

char *str_concat(char *s1, char *s2)
{
	char *T;
	unsigned int i, j, len1, len2;

	if (s1 != NULL)
		for (len1 = 0; s1[len1]; len1++)
			;
	if (s2 != NULL)
		for (len2 = 0; s2[len2]; len2++)
			;
	T = malloc((len1 + len2 + 1) * sizeof(char));
	if (T == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		T[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		T[i] = s2[j];
	T[i] = '\0';
	return (T);
}
