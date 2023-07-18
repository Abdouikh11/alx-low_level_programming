#include "main.h"

/**
 * _isalpha - check the code.
 *@c: the char that we are gonna check
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
