#include "main.h"
#include <stdlib.h>

/**
 * _strncat - concatenates two string
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

