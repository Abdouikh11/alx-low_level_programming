#include "main.h"

/**
 * _atoi - Function that's converts a string to integer
 * @s: the pointer as the string to convert
 * Return: The integer value of a string
 **/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i] - '0';
		i++;
	}

	return (result * sign);
}
