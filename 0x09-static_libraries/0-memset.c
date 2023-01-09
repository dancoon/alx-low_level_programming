#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

