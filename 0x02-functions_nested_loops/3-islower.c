#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: stores the letter
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
