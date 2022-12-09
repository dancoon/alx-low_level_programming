#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible different
 * combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s, t;

	for (f = 48; f <= 57; f++)
	{
		for (s = f + 1; s <= 57; s++)
		{
			for (t = s + 1; t <= 57; t++)
			{
				putchar(f);
				putchar(s);
				putchar(t);
				if ((f + s + t) != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

