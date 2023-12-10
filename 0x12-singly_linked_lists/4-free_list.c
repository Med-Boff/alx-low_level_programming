#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to the head of the linked list
 *
 */

void free_list(list_t *head)
{
	list_t *t_node = head;
	list_t n_node;


	while (t_node != NULL)
	{
		n_node = t_node->next;
		free(t_node->str);
		free(t_node);
		t_node = n_node;
	}
}
