#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase, and then in
 * uppercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}

