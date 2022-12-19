#include "main.h"

/**
 * _strlen - length of a string
 *
 * @s: first parameter
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

