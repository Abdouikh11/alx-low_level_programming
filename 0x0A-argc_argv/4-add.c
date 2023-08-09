#include "main.h"

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the array of string
 * Return: return a 0 if successed
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;
	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
