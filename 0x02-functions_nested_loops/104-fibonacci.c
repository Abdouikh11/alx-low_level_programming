#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 100

void print_string(char *str);
void add_strings(char *a, char *b, char *c);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char a[MAX_DIGITS] = "1";
	char b[MAX_DIGITS] = "2";
	char c[MAX_DIGITS];

	print_string(a);
	printf(", ");
	print_string(b);

	for (i = 2; i < 98; i++)
	{
		add_strings(a, b, c);
		printf(", ");
		print_string(c);
		strcpy(a, b);
		strcpy(b, c);
	}
	printf("\n");
	return (0);
}
/**
 * print_string - Prints a string without leading zeros
 * @str: The string to print
 */
void print_string(char *str)
{
	int i = 0;
	while (str[i] == '0')
		i++;
	printf("%s", &str[i]);
}
/**
 * add_strings - Adds two strings of digits
 * @a: The first string of digits
 * @b: The second string of digits
 * @c: The resulting string of digits
 */
void add_strings(char *a, char *b, char *c)
{
	int i = strlen(a) - 1;
	int j = strlen(b) - 1;
	int k = MAX_DIGITS - 1;
	int carry = 0;
	int sum;

	memset(c, '0', MAX_DIGITS);

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += a[i--] - '0';
		if (j >= 0)
			sum += b[j--] - '0';
		c[k--] = (sum % 10) + '0';
		carry = sum / 10;
	}
}

