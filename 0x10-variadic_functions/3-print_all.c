#include "variadic_functions.h"
/**
 * print_char - print char
 * @args: va_list
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - print int
 * @args: va_list
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print float
 * @args: va_list
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_str - print string
 * @args: va_list
 * Return: void
 */
void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - prints all
 * @format: format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";

	print_f fun[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (fun[j].c)
		{
			if (format[i] == *(fun[j].c))
			{
				printf("%s", separator);
				fun[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

