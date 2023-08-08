#include  "main.h"

/**
 * create_array - fonction that creates ana array
 * @size: The size of the array to be creatted
 * @c: The character to puts in array
 * Return: returns the array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tab = malloc(sizeof(char) * size);
	if (tab == 0)
		return (NULL);
	for (i = 0; i < size ; i++)
		tab[i] = c;
	return (tab);
}
