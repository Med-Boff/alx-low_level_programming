#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length, i;

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		if (s[i] != s[length - i - 1])
		{
			return (0);
		}
	}

	return (1);
}
