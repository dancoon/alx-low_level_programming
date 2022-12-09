#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptor: a program that prints all possible combinations
 * of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch < 57)
			putchar(',');
		if (ch < 57)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

