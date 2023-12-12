#include "lists.h"

/**
 * add_nodeint_end - prints elements of a linked list
 *
 * @n: num
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *t_node = *head;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (t_node->next != NULL)
		{
			t_node = t_node->next;
		}
		t_node->next = n_node;
	}
	return (n_node);
}
