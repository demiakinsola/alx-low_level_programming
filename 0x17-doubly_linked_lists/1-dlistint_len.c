#include "lists.h"

/**
 * dlistint_len - This returns the number of elements in a list.
 * @h: pointer to node structure.
 * Return: Number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next; /* loop counter */
	}
	return (elements);
}
