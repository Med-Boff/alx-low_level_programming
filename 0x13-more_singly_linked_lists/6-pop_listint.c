#include "lists.h"

/**
 * pop_listint - fonc that deletes the head node of a list
 * @head: pointer to the head of the list
 *
 * Return: returns the head node’s data or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t tmp;

	if (*head->n == NULL)
	{
		return (0);
	}
	tmp->n = *head->n;
	*head = NULL;

	return (tmp->m);

}
