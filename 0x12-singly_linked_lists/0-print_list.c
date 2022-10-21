#include "lists.h"

/**
 * print_list - This prints all the elements of a list.
 * @h: Pointer to a node structure.
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int node = 0; /* no. of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next; /* incrementer for linked list */
		node++;
	}
	return (node);

}
