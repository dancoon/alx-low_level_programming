#include "main.h"

/**
 * is_prime - check if is prime
 * @n: number
 * @k: for 0 - n/2
 * Return: 0 or 1
 */
int is_prime(int n, int k)
{
	if (n % k == 0)
		return (0);
	if (k > n / 2)
		return (1);
	return (is_prime(n, k + 1));
}

/**
 * is_prime_number - check if prime
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}

