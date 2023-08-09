#include "main.h"

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the array as pointer to string
 * Return: return 0 if successed
 */

int main(int argc, char *argv[])
{
	int a, b, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	p = a * b;
	printf("%d\n", p);
	return (0);
}
