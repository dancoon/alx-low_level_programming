#include "main.h"
/**
 *print_alphabet_x10 - Prints the alphabet 10 times
 *
 *
 *Return: Always zero
 */
void print_alphabet_x10(void)
{
char c;
int x;
for (x = 0; x <= 9; x++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
