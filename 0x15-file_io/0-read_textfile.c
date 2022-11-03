#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and orints it to POSIX stdout.
 * @filename: the number of letters the function should read anf print.
 *
 * Return: If the function fails of filename is NULL - 0
 * 0/w- the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o,r,w;
	char *buffer;

	if (filename == NULL)
		return 0;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return 0;

	o = open(filename, O_RONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return 0;
	}

	free(buffer);
	close 0;

	return (w);
}
