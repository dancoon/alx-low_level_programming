#include "main.h"
/**
 *jack_bauer - Counter
 *
 *Return: Always 0
 */
void jack_bauer(void)
{
int h, m, i, j, k, l;
for (h = 0; h < 24; h++)
{
i = h / 10;
j = h % 10;
for (m = 0; m < 60; m++)
{
k = m / 10;
l = m % 10;
_putchar('0' + i);
_putchar('0' + j);
_putchar(':');
_putchar('0' + k);
_putchar('0' + l);
_putchar('\n');
}
}
}
