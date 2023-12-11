#include "lists.h"

/**
 * add_node - prints elements of a linked list
 *
 * @n: name
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;


	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = *head;
	n_node->n = n;
	*head = n_node;

	return (n_node);
}
