#include "main.h"
/**
 *times_table - Prints the times table
 *
 *Return: Always 0
 */
void times_table(void)
{
int a, b, c, d, e;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
c = a * b;
d = c / 10;
e = c % 10;
if (b == 0)
_putchar('0');
else if (c < 10)
{
_putchar(' ');
_putchar('0' + e);
}
else
{
_putchar('0' + d);
_putchar('0' + e);
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}
