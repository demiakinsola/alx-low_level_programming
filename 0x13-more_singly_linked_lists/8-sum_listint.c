#include "lists.h"

/**
 * sum_listint - This returns the sum of all the data of a linked list.
 * @head: Pointer to first node in the linked list.
 * Return: Sum of all data(n) of the lnked list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head) /* if the list is empty */
	{
		return (0);
	}

	while (head) /* while the node exits */
	{ /* or while it's not pointing to a null address */
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
