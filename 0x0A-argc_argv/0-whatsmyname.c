#include "main.h"

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the array of strings as pointer
 * Return: return 0 alwyas success
 ***/

int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
