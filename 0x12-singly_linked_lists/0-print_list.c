#include "lists.h"

/**
 * print_list - This prints all the elements of a list.
 * @h: Pointer to a node structure.
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int i; /* index for string */
	unsigned int node = 0; /* no. of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		printf("[%d] ", h->len);
		for (i = 0; h->str[i]; i++)
		{
			printf("%s\n", h->str);
		}
		node++;
		h = h->next; /* incrementer */
	}
	return (node);

}
