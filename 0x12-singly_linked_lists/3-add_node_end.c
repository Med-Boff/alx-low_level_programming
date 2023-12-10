#include "lists.h"

/**
 * add_node_end - prints elements of a linked list
 *
 * @str: name
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;

	if (str == NULL)
	{
		return (NULL);
	}

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	n_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (n_node->next != NULL)
		{
			n_node->next = n_node;
		}
	}
	return (n_node);
}
