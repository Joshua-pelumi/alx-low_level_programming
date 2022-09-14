#include <stdio.h>
/**
 * main - returns fibomacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int n1, n2, n3, sum;

	n1 = 1;
	n2 = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{

		if ((n1 < 4000000) && (n1 % 2 == 0))
		{
			sum = sum + n1;
		}

		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

	}

	printf("%lu\n", sum);
	return (0);
}
