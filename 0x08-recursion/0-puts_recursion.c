#include <unistd.h>

/**
 * puts_recursion - fonction that prints a string followed by a new line
 * @s: var holding the string
 *
 * Return: always 0
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
int main(void)
{
	_puts_recursion("Hello M");
	return (0);
}
