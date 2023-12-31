#include "main.h"

/**
 * main - Entry point
 * @argc: The number  command line arguments
 * @argv: An array of strings
 * Return: 0 on success, 1 if fails
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
