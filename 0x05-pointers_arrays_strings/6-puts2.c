#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * starting with the first character
 *
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[i] != '\0')
		len++;

	for (i = 0; i < len; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
