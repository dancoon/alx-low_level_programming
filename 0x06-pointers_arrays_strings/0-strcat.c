#include "main.h"

/**
 * _strcat - concantenates two strings
 *
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	while (*(dest + i) = *(src + j))
	{
		j++;
		i++;
	}
	return (dest);
}

