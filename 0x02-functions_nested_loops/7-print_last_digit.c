#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @num: parameter
 *
 * Return: last digit
 */

int print_last_digit(int num)
{

	int n = num % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (n);
}
