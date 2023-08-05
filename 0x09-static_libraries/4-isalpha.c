#include "main.h"

/**
 * _isalpha - check the code.
 *@c: the char that we are gonna check
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
