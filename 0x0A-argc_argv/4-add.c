#include "main.h"

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the array of string
 * Return: return a 0 if successed
 */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	for (i = 0; i < argc; i++)
	{
		n = atoi(argv[i]);
		if (n == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
