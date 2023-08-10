#include "main.h"

/**
 * string_nconcat - function that concatenate two strings s1 and s2
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to allocat of s2
 * Return: returns tha pointer or NULL if fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1 = 0, l2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (n >= l2)
		n = l2;
	concat = malloc(sizeof(char) * (l1 + n + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';
	return (concat);
}
