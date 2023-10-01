#include <unistd.h>
#include "main.h"
/**
 * _puts_recursion - prints string in reverse
 * @s: input to the fonction
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		write(1, s, 1);
	}
}
