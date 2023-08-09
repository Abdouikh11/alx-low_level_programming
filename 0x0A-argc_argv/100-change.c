#include "main.h"

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the array of strings
 * Return: 0 if succes or 1 if fails
 */


int main(int argc, char *argv[])
{
	int cents, min_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int coins[] = {25, 10, 5, 2, 1};
		int num_coins = sizeof(coins) / sizeof(coins[0]);
		int i;

		for (i = 0; i < num_coins; i++)
		{
			while (cents >= coins[i])
			{
				cents -= coins[i];
				min_coins++;
			}
		}

		printf("%d\n", min_coins);
	}

	return 0;
}
