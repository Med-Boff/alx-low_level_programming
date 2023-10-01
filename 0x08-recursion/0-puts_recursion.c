#include <unistd.h>
#include "main.h"
/**
 * _puts_recursion - prints string folowed by new line
 * @s: input to the fonction
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		write(1, s, 1);
		_puts_recursion(s + 1);
	}
	else
		write(1, "\n", 1);
}
