#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: first parameter
 *
 * Return: void
 */
void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;

	fwrite(str, len, 1, stdout);
	putchar('\n');
}

