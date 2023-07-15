#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			int num1 = i / 10;
			int num2 = i % 10;
			int num3 = j / 10;
			int num4 = j % 10;

			putchar('0' + num1);
			putchar('0' + num2);
			putchar(' ');
			putchar('0' + num3);
			putchar('0' + num4);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
