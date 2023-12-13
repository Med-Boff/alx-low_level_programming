#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first var
 * @s2: second var
 *
 * Return: pointer to a new space in memory or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1 = (s1 == NULL) ? 0 : strlen(s1);
	size_t len2 = (s2 == NULL) ? 0 : strlen(s2);

	result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
	return (NULL);
	}

	if (s1 != NULL)
	{
	strcpy(result, s1);
	}

	if (s2 != NULL)
	{
	strcpy(result + len1, s2);
	}

	return (result);
}
