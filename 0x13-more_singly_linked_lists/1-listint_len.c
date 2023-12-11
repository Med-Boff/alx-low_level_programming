#include "lists.h"

/**
 * listint_len - returns the num of elements of a linked list
 *
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
