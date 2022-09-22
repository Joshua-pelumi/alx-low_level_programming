#include "main.h"

/**
 * rot13 - encodes rot13
 * @s: string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int count = 0;
	int i = 0;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}

		count++;
	}

	return (s);
}
