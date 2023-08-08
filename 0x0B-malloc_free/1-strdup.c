#include "main.h"

/**
 * _strdup - Function that returns a pointer in the new allocated memroy
 * @str: THe string thatw e are gonna duplicate
 * Return: returns the pointer that we allocated if it;s null fails
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *T;

	if (str == 0)
		return (NULL);
	for (j = 0; str[j]; j++)
		;
	T = malloc(sizeof(char) * (j + 1));
	if (T == 0)
		return (NULL);
	for (i = 0; i < j; j++)
		T[i] = str[i];
	T[j] = '\0';
	return (T);
}
