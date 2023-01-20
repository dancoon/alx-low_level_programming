#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: first parameter
 * @n: args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char*))
			printf("%s", va_arg(args, char*));
		else
			printf("(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

