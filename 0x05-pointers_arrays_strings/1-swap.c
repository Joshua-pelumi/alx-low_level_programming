#include "main.h"

/**
 * swap_int - swaps value of two int
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
