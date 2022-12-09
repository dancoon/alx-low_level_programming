#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptor: a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n, ch;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

