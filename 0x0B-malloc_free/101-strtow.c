#include "main.h"

/**
 * count_words - Count the number of words in a string
 * @str: The string to count words in
 * Return: returns the number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}

	return (count);
}

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, l, num_words, word_len;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < num_words; i++)
	{
		while (str[j] == ' ')
			j++;

		word_len = 0;
		while (str[j + word_len] != ' ' && str[j + word_len] != '\0')
			word_len++;

		words[i] = malloc(sizeof(char) * (word_len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (l = 0; l < word_len; l++)
			words[i][l] = str[j + l];
		words[i][l] = '\0';

		j += word_len;
	}

	words[i] = NULL;

	return (words);
}
