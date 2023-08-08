#include "main.h"

/**
 * _strdup - Function that returns a pointer in the new allocated memroy
 * @str: THe string thatw e are gonna duplicate
 * Return: returns the pointer that we allocated if it;s null fails
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *t;

	if (str == 0)
		return (NULL);
	for (j = 0; str[j]; j++)
		;
	t = malloc((j + 1) * sizeof(char));
	if (t == 0)
		return (NULL);
	for (i = 0; i < j; i++)
		t[i] = str[i];
	t[j] = '\0';
	return (t);
}
