#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 *
 */
int main(void)
{
	int i;
	long long int a = 1, b = 2, c;

	printf("%lld, %lld", a, b);

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
