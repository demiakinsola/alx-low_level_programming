#include "lists.h"

/**
 * delete_nodeint_at_index - This deletes the node at a particular index
 * in a linked list.
 * @head: Pointer to a pointer that points to the first node.
 * @index: Index of the node to be deleted.
 * Return: 1 on success, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0; /* counter for index */
	listint_t *tmp; /* holder for node to be deleted */

	if (head && index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (count <= index)
	{
		if (!(*head))
			return (-1);
		*head = (*head)->next;
		if (count == index)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
