#include "lists.h"

/**
 * *add_nodeint - A function that adds a new node at the
 * beginning of a linked list.
 * @head: Pointer to a pointer pointing to each nodoe structure.
 * @n: Integer in the node structure.
 *
 * Return: Address of new element on success. Otherwise, NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	/* allocate memoory for new node n linked list */

	if (new_node != NULL)
	{
		while (*head != NULL)
		{
			new_node->n = n;
			new_node->next = *head;
		/* assign first node to node after new node */
			*head = new_node;
		} /* assign new node to head pointer */
		return (*head);
	}

	return (NULL);
}
