#include "main.h"

/**
 * _strlen - accepts the length of string
 * @s: pointer of the length
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int size = 0;

	for (size = 0; *(s + size) != '\0';)
		size++;

	return (size);
}
