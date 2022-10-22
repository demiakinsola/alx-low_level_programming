#include "lists.h"

/**
 * free_list - Thus function frees a linked list.
 * @head: Pointer to first node in a linked list.
 * Return: Void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
