#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible different combinations
 * of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s;

	for (f = 48; f <= 57; f++)
	{
		for (s = f + 1; s <= 57; s++)
		{
			putchar(f);
			putchar(s);
			if (f + s != 113)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

