#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two str
 * @s1: str 1
 * @s2: str 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	ptr = malloc(sizeof(char) * k);
	if (ptr == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		ptr[l] = s1[l];
	for (l = 0; l < j; l++)
		ptr[i + l] = s2[l];
	ptr[i + j] = '\0';
	return (ptr);
}

