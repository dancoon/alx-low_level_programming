#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible combinations
 * of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s;

	for (f = 0; f <= 98; f++)
	{
		for (s = f + 1; s <= 99; s++)
		{
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');
			putchar(' ');
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');
			if (f == 98 && s == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

