#include <unistd.h>
#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: input to the fonction
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		write(1, s, 1);
	}
}
