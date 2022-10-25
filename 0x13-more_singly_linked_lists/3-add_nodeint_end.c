#include "lists.h"

/**
 * *add_nodeint_end - This adds a new node at the end of a linked list.
 * @head: Pointer to a pointer that points to a linked list.
 * @n: Integer data for node structure.
 * Return: Address of the new element on success. Otherwise, NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /* node to add at the end of kist */
	listint_t *last_node; /* initial last node in lisst */

	new_node = malloc(sizeof(listint_t)); /* allocate memory */

	if (new_node != NULL)
	{ /* assign its data */
		new_node->n = n;
		new_node->next = NULL; /* since its the last node */
		if (*head == NULL) /* if its empty */
		{
			*head = new_node;
			return (*head);
		}
		last_node = *head;
		/* traverse the list */
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		return (*head);
	}
	return (NULL);
}
