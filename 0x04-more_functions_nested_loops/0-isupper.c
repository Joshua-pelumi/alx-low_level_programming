#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: character variable
 *
 * Return: 1 (upper)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
