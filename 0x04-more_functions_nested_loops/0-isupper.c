#include "main.h"

/**
 * _isupper - checks c
 *
 * @c: input
 *
 * Return: 1 if it is uppercase 0 if it is lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
