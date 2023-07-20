#include "main.h"

/**
 * _isdigit - fonction that cheks for a digit
 * @c:the number
 * Returns: 1 if it's correct or 0 if not
 */

int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
