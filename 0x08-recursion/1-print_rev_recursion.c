#include <unistd.h>

/**
 * _print_rev_recursion - fonction that prints a string followed by a new line
 * @s: var holding the string
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		write(1, s, 1);
	}
}
