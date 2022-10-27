#include "lists.h"

/**
 * *insert_nodeint_at_index - This inserts a node at a given position.
 * @head: Pointer to a pointer that points to the first node.
 * @idx: Index of the list where the node should be added.
 * @n: Value of integer n of the new node.
 *
 * Return: Addresss of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0; /* counter for index */
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /* allocate memory */
	new_node->n = n;

	if (!(*head)) /* if it's not pointing to anything */
	{
		return (NULL);
	}
	if ((*head) && idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	while (count <= idx)
	{
		if (*head)
		{
			*head = (*head)->next;
			if (count == idx)
			{
				new_node->next = *head;
				*head = new_node;
				return (*head);
			}
		}
		count++;
	}
	return (NULL);

}
