#include "lists.h"

/**
 * *add_dnodeint - Thus adds a new node at the beginning of the list.
 * @head: pointer to first node.
 * @n: data in linked list.
 *
 * Return: Address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
	}

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
