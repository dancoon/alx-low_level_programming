#include <unistd.h>
/**
 * _putchar - put char
 * @c: char
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

