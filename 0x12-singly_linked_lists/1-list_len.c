#include "lists.h"

/**
 * list_len - This  returns the number of elements in a linked list_t list.
 * @h: Poiter to node structure.
 * Return: Number of elements.
 */

size_t list_len(const list_t *h)
{
	unsigned int elements = 0; /* no. of elements */

	while (h != NULL)
	{
		elements++;
	}
	return (elements);
}
