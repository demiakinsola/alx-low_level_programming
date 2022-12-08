#include "lists.h"

/**
 * print_dlistint - This prints all the elements of a list.
 * @h: pointer to node structure.
 *
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0; /* for number of nodes. */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
