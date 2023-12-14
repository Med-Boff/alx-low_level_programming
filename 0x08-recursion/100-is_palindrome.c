#include "main.h"

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */


int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}

/**
 * is_palindrome_recursive - checks if s palndromet
 * @s: var1
 * @start: var2
 * @end: var3
 *
 * Return: 1 if polindrom and 0 if not
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}

	if (s[start] != s[end])
	{
	return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
