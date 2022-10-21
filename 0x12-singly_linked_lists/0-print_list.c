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
			printf("[0] (nil)");
		}
		printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next; /* incrementer */
	}
	return (node);

}
