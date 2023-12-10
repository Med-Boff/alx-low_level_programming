#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to the head of the linked list
 *
 */

void free_list(list_t *head)
{
	list_t *t_node = *head;


	while (t_node->next != NULL)
	{
		t_node->next = NULL;
	}
}
