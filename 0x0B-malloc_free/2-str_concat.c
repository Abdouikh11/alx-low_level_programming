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
	unsigned int i, j, l1 = 0, l2 = 0;

	if (s1 != NULL)
		for (l1 = 0; s1[l1]; l1++)
			;
	if (s2 != NULL)
		for (l2 = 0; s2[l2]; l2++)
			;
	T = malloc((l1 + l2 + 1) * sizeof(char));
	if (T == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		T[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		T[i] = s2[j];
	T[i] = '\0';
	return (T);
}
