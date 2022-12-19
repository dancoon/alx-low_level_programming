#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: first parameter
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char buffer[250];
	
	len = 0;
	while (s[len] != '\0')
	{
		*(buffer + len) = s[len];
		len++;
	}

	
	len = len - 1;
	i = 0;
	while (len >= 0)
	{
		s[len] = *(buffer + i);
		len--;
		i++;
	}
}

