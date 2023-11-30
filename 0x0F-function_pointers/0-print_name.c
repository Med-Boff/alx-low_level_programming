#include <stdlib.h>

/**
 * print_name - fonction printing a name from input
 * @name: var
 *
 * @f:fonction poiter
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
