#include "main.h"
#include <string.h>
/**
 * _strdup - returns a point to a new  space in mem that contains a copy of str
 * @str: var that contains string
 *
 * Return: a pointer to a space in memory
 */

char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = (malloc(strlen(str) + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, str);
	return (p);

}

