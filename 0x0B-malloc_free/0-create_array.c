#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize
 * @size: size of array
 * @c: character
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}

