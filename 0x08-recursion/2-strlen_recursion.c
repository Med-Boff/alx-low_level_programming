#include <unistd.h>
/**
 * _strlen_recursion - A fonction that returns lenght of a string
 * @s: input
 * Return: returns the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
}
