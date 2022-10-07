#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting point
 * @max: maximum value
 *
 * Return: a pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);

	j = (max - min) + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < j)
	{
		arr[i] = min;
		i++, min++;
	}

	return (arr);
	free(arr);
}
