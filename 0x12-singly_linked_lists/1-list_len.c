#include "lists.h"

/**
 * list_len - This  returns the number of elements in a linked list_t list.
 * @h: Pointer to node structure.
 * Return: Number of elements.
 */

size_t list_len(const list_t *h)
{
	unsigned int elements = 0; /* no. of elements */

	while (h && h->str) /* while both aren't pointing to a null address */
	{
		elements++;
		h = h->next; /* incrementer for linked list */
	}
	return (elements);
}
