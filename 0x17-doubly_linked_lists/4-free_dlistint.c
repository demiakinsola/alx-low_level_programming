#include "lists.h"

/**
 * free_dlistint - This frees a linked list.
 * @head: pointer to first node in a linked list.
 * Return: Void.
 */

void free_dlistint(dlistint_t *head)
{
	while  (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
