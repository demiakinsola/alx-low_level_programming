#include "lists.h"

/**
 * *get_dnodeint_at_index - This returns the nth node of a linked list.
 * @head: pointer to head node.
 * @index: index of the node starting from 0.
 *
 * Return: nth node if it exists, else NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;/* counter for index */

	temp = head;
	if (head == NULL) /* If it is not pointing to anything */
		return (NULL);

	for (count = 0; count < index && temp != NULL; count++)
	{
		temp = temp->next;
	}
	if (temp == NULL) /* if the node does not exist */
		return (NULL);
	return (temp);
}
