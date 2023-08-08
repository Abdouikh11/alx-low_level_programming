#include "main.h"

/**
 * alloc_grid - function that's returns a pointer to a 2 dim array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: returns the pointer to the T witch is the grid or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **T;

	if (width <= 0 || height <= 0)
		return (NULL);
	T = malloc(height * sizeof(int *));
	if (T == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		T[i] = malloc(width * sizeof(int));
		if (T[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(T[j]);
			free(T);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			T[i][j] = 0;
	return (T);
}
