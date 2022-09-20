#include "main.h"

/**
 * puts_half - prints a string
 * @str: param
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		_putchar(*(str + i));

	_putchar('\n');
}

/**
 * _strlen - returns the lengthof a string
 *  @s: string
 *
 *  Return: lenth
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
