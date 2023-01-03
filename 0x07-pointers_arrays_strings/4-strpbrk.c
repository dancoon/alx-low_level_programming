#include "main.h"

/**
 * _strpbrk - searches for a string for any of a set of bytes
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (*(accept + j))
			return (s + i);
	}
	return (0);
}

