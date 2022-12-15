#include "main.h"
/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */


void more_numbers(void)
{
	char a, b, c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
				b = c;
			else
			{
				a = c / 10;
				b = c % 10;
				_putchar('0' + a);
			}
			_putchar('0' + b);
		}
		_putchar('\n');
	}
}
