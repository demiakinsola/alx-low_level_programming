#include "lists.h"

/**
 * free_listint - This frees a linked list.
 * @head: Pointer to first node in a linked list.
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	int i = 0;

	while (head) /* while it's not pointing to a null address) */
	{
		head = head->next;
		i++;
	}

	while (i != 0)
		free(head);

}
