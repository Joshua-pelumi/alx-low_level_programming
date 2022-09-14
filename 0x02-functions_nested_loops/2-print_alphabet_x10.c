#include "main.h"

/**
 * print_alphabet_x10 - prints a-z 10times
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 1; count <= 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}

