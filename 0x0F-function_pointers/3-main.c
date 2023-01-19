#include "3-calc.h"
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int i = argc;
	char *s = argv[2];
	int (*fun)(int, int) = get_op_func(s);

	int d = fun(1, 1);

	printf("argc: %d %s %d\n", i, s, d);
	return (0);
}

