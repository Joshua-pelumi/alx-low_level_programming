#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two int
 *
 * @a: first int
 * @b: second int
 * Return: add
 */

int op_add(int a, int b)
{
	int add = (a) + (b);

	return (add);
}

/**
 * op_sub - subtracts
 *
 * @a: first int
 * @b: second int
 * Return: sub
 */
int op_sub(int a, int b)
{
	int sub = (a) - (b);

	return (sub);
}

/**
 * op_mul - multiplies
 *
 * @a: first int
 * @b: second int
 * Return: mul
 */
int op_mul(int a, int b)
{
	int mul = (a) * (b);

	return (mul);
}

/**
 * op_div - divides
 *
 * @a: first int
 * @b: second int
 * Return: div
 */
int op_div(int a, int b)
{
	int div = (a) / (b);

	return (div);
}

/**
 * op_mod - gives the remainder after divisions
 *
 * @a: first int
 * @b: second int
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod = (a) % (b);

	return (mod);
}
