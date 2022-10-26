#include "lists.h"

/**
 * free_listint2 - This frees a list & sets head to NULL.
 * @head: Pointer to pointer that points to first node.
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		free(*head);
		while (head != NULL)
		{
			free(head);
			head = head->next;
		}
		*head = *head->next;
	}
	*head = NULL;
}

