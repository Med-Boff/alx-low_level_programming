#include <stdio.h>

/**
 * array_iterator - funtcion executes function as a parameter
 * @array: an array
 * @size: var
 * @action: fonction poiter
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; ++i)
	{
	action(array[i]);
	}
}
