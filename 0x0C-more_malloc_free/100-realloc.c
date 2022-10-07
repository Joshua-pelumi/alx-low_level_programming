#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - relocated a memory block
 * @ptr: previously allocated memory
 * @old_size: allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: a pointer to the relocted memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldPtr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p =  malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = oldPtr[i];
	free(ptr);
	return (p);
}
