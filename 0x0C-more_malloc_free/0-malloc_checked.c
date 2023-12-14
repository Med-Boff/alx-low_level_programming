#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: intiger var
 *
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
