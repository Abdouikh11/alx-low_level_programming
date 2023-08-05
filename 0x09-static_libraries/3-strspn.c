#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: the pointer to string
 * @accept: the pointer to string that has acceptebale characters
 * Return: returns the number of byts in which is the pointer s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	/* iterate through s */
	for (; *s; s++)
	{
		/* iterate through accept */
		for (p = accept; *p; p++)
		{
			/* if a byte from accept is found in s, increment count */
			if (*s == *p)
			{
				count++;
				break;
			}
		}
		/* if no byte from accept is found, break out of loop */
		if (*p == '\0')
			break;
	}
	return (count);

}
