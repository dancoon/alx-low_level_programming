#include "main.h"
#include <stddef.h>

/**
 * _strcpy - copies a string
 *
 * @dest: first pareameter
 * @src: second oarameter
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}

