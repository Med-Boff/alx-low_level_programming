#include "main.h"

/**
 * create_array - creates an array, initializes it with a specific char
 * @size: size of the array
 * @c: first element of the array
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{

		if (p == NULL)
		{
			return (NULL);
		}
	}
	return (p);
}
