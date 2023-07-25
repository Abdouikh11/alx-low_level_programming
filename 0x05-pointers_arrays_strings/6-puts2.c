#include "main.h"
#include <string.h>
/**
 * puts2 - Function that's prints every other character starting with the first
 * @str: Pointer to the string
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
