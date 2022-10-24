#include "lists.h"

/**
 * print_listint - This function prints all the elements of a linked list.
 * @h: Pointer to each node structure in the linked list.
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int nodes_number = 0; /* number of nodes */

	while (h) /* while it's not pointing to a nul adddress */
	{
		printf("%d\n", h->n);
		h = h->next; /* counter that increments loop and
			      *	moves to next node.
			     */
		nodes_number += 1; /* increment for number of nodes */
	}
	return (nodes_number);
}
