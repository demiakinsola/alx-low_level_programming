#include "lists.h"

/**
 * *get_nodeint_at_index - This returns the nth node of a linked list.
 * @head: Pointer to a node structure.
 * @index: Index of node.
 * Return: nth node of a linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0; /* counter for index */

	if (head != NULL && index == 0)
	{
		return (head);
	}

	while (count <= index)
	{
		if (!head) /* if the node does not exist */
		{
			return (NULL);
		}
		head = head->next;
		count++;
	}
	return (head);
}
