#include <stdio.h>
/**
 * main - returns fibomacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{

		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}

	}

	printf("%d\n", sum);
	return (0);
}
