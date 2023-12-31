#include "lists.h"

/**
 * list_len - returns the num of elements of a linked list
 *
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
