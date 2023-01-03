#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first parameter
 * @needle: second parameter
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	j = 0;
	i = 0;
	while (*(haystack + i))
	{
		while (*(needle + j) && *(haystack + i) == *needle)
		{
			if (*(haystack + (i + j)) == *(needle + j))
				j++;
			else
				break;
		}

		if (*(needle + j))
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (0);
}

