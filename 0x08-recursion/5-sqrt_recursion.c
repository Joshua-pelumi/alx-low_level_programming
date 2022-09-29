#include "main.h"

/**
 * _sqrt - return square root
 * @n: test no
 * @x: square number
 *
 * Return: int
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}

/**
 * _sqrt_recursion - gives natural square root
 * @n: integer
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
