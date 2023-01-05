#include "main.h"

/**
 * find_sqrt - find squareroot
 * @n: number
 * @g: guessed number
 * Return: squareroot
 */
int find_sqrt(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (find_sqrt(n, g + 1));
}

/**
 * _sqrt_recursion - finds the square root
 * @n: number
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqrt(n, 1));
}

