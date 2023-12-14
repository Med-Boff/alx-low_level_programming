#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all the arg of your prog
 * @ac: first var
 * @av: second var
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	char *result;
	int index;
	int length;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_length + 1);
	if (result == NULL)
	{
	return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
	length = strlen(av[i]);
	strcpy(result + index, av[i]);
	index += length;

	result[index++] = '\n';
	}

	result[total_length] = '\0';

	return (result);
}
