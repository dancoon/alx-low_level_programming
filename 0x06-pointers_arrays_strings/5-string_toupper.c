#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 *
 * @s: first parameter
 *
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
		{
			*(s + i) -= 32;
		       i++;
		}
	}
	return (s);
}

