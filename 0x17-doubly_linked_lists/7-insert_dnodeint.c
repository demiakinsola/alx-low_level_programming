#include "lists.h"

/**
 * *insert_dnodeint_at_index - This inserts a new node at a given position.
 * @h: Pointer to first node in linked list.
 * @idx: Index of the list where new node should be added.
 * @n: Data in each node in the linked list.
 *
 * Return: Address of new node or NULL if it fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp; /* to loop through linked list */
	unsigned int count; /* count for index */

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL) /* if the linked list is empty */
	{
		(*h) = new_node;
		new_node->prev = NULL;
	}
	for (count = 0; count < idx && temp->next != NULL; count++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
