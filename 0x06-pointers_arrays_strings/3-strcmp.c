#include "main.h"
/**
 *_strcmp - Compares two strings
 *@s1: First string
 *@s2: Second string
 *Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) &&*(s2 + i) &&(*(s1 + i) == *(s2 + i)))
		i++;
	
	return (*(s1 + i) - *(s2 + i));
}
