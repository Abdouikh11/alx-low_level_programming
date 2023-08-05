#include "main.h"

/**
 * _isdigit - Fonction that cheks for a digit
 * @c:the number
 * Return: Alwyas 1 if it's correct or 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
