#include "main.h"

/**
 * _strpbrk - Function that searches for a string for any bytes
 * @s: The pointer to string to search
 * @accept: bytes to search for
 * Return: returns a pointer to the bytes s
 *
 **/

char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (; *s; s++)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
				return (s);
		}
	}
	return (NULL);
}
