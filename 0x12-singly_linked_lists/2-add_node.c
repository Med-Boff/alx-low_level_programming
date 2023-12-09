#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - prints elements of a linked list
 *
 * @str: name
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	list_t n_node = malloc(sizeof(list_t));

	n_node->str = strdup(str);
	n_node->len = strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
