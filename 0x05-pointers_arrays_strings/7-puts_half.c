#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @str: first parameter
 *
 * Return; void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	j = i / 2;
	if (i % 2 == 1)
		j += 1;

	for (; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}

