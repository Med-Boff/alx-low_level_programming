#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to the head of the linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *t_node = *head;
	listint_t *n_node;



	while (t_node != NULL)
	{
		n_node = t_node->next;
		free(t_node);
		t_node = n_node;
	}
	*head = NULL;
}
