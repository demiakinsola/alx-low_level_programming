#include "lists.h"

/**
 * *add_dnodeint_end - This adds a new node at the end of a linked list.
 * @head: pointer to first node.
 * @n: data in each node.
 *
 * Return: address of new element or null if it fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp;
	/* temporary node to loop through list */

	temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* If malloc fails. */
		return (NULL);

	new_node->n = n;
	if (*head == NULL) /* if head does not contain any node */
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;

	return (new_node);
}
