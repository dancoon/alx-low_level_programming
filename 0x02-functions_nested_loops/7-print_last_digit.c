#include "main.h"
/**
 *print_last_digit - Prints the last digit of a number
 *@n: parameter
 *Return: Always 0
 */
int print_last_digit(int n)
{
int r;
int l = n % 10;
if (l < 0)
l = -l;
r = '0' + l;
_putchar (r);
return (l);
}
