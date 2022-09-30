#include "main.h"

/**
 * _strlen_recursion - gives length of string
 * @s: the string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}

/**
 * check - checks for palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag: indicates if the sting is a palindrome
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * is_palindrome - checks for palindrome
 * @s: string
 *
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}
