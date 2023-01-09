#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (i < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

