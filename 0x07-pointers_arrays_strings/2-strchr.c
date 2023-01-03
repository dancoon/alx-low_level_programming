#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: first parameter
 * @c: second parameter
 * Return: character or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}

