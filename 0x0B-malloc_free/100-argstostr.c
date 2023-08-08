#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: The number of arguments
 * @av: The arguments itself
 * Return: returns the pointer to  string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			l++;
	l += ac;
	s = malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			s[k] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
