#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: first parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;

	len = len - 1;
	while (len >= 0)
	{
		printf("%c", s[len]);
		len--;
	}
	putchar('\n');
}

