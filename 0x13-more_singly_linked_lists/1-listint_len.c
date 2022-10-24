#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a linked list.
 * @h: Pointer to eaach node struxcture in the linked list.
 * Return: Number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int elements = 0; /* no. of elements in linked list */

	while (h) /* while it's not pointing to a null address */
	{
		elements += 1;
		/* increment it for each loop iteration */
		h = h->next;
		/* incrementer or pointer to next node */
	}
	return (elements);
}
