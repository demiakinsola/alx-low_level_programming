#include "lists.h"

/**
 * free_listint - This frees a linked list.
 * @head: Pointer to first node in a structure.
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
