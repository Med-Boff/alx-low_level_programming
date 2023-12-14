#include "main.h"

/**
 * _calloc - allocates memory for an array and sets it to zero.
 * @nmemb: number of elements in the array
 * @size: size in bytes of each element
 *
 * Return: a pointer to the allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);

	return (ptr);
}
