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
	char buffer[750];
	int i, j, k;
	char *ptr = buffer;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		buffer[k] = dest[i];
		i++;
		k++;
	}

	j = 0;
	k -= 1;
	while (src[j] != '\0')
	{
		buffer[k] = src[j];
		j++;
		k++;
	}
	k -= 1;
	buffer[k] = '\0';

	return (ptr);
}

