#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: integer
 *
 * Return: 1 if prime else 0
 */
/**
 * @i: number to start from
 */
int prime(int n, int i);
int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (prime(n, i));
}

/**
 * prime - checks for prime numbers
 * @n: integer
 * @i: number to start from
 *
 * Return: 1
 */

int prime(int n, int i)
{
	if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (prime(n, i - 1));
}
