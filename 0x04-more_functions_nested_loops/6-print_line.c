#include "main.h"

/**
 * print_line - draws a strait line
 *
 * @n: the number of _
 * Return: always 0
 */

void print_line(int n)
{
	int r;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
			_putchar('_');
		_putchar('\n');
	}
}
