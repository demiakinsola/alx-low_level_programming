#include "lists.h"

/**
 * pop_listint - This deletes the head node of a linked list.
 * @head: Pointer to a pointer that points to the first node.
 * Return: Head node's data.
 */

int pop_listint(listint_t **head)
{
	int data; /*head nodes's data(n) */
	listint_t *tmp; /* variable for first node */

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
