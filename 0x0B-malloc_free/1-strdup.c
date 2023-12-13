#include "main.h"

/**
 * _strdup - returns a point to a new  space in mem that contains a copy of str
 * @str: var that contains string
 *
 * Return: a pointer to a space in memory
 */

char *_strdup(char *str)
{
	char *P;

	if (str == NULL)
	{
		return (NULL);
	}
	p = (malloc(str));
	*p = strdup(str);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);

}

