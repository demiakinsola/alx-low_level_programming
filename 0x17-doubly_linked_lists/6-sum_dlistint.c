#include "lists.h"

/**
 * sum_dlistint - This returns the sum of all the data(n) in a linked list.
 * @head: pointer to first node.
 *
 * Return: The sum of the data.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp; /* temporary node to loop through list */

	temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
