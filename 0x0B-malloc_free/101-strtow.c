#include "main.h"
/**
 * strtow - Split a string into words
 * @str: The string to split
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, l, num_words = 0, word_len;
	char **words;

	if (!str || !*str)
		return (NULL);
	for (i = 0; str[i]; i++)
		if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
			num_words++;
	words = malloc(sizeof(char *) * (num_words + 1));
	if (!words)
		return (NULL);
	for (i = 0, j = 0; i < num_words; i++)
	{
		while (str[j] == ' ')
			j++;
		for (word_len = 0; str[j + word_len] && str[j + word_len] != ' '; word_len++)
			;
		words[i] = malloc(word_len + 1);
		if (!words[i])
			return (NULL);
		for (l = 0; l < word_len; l++)
			words[i][l] = str[j + l];
		words[i][l] = '\0';
		j += word_len;
	}
	words[i] = NULL;
	return (words);
}
