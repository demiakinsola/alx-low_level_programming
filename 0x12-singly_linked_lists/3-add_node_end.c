#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a linked list.
 * @head: Pointer to first node in a linked list.
 * @str: String to be duplicated and printed.
 *
 * Return: Address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* pointer to new node of structure type */
	unsigned int i; /* to loop through th string */
	unsigned int length; /* to find length of string */
	list_t *last_node;


	new_node = malloc(sizeof(list_t)); /* allocate memory */
	last_node = *head; /* assign first node to last node */
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		length = 0;
		for (i = 0; str[i]; i++)
		{
			length++;
		}
		new_node->len = length;

		new_node->next = NULL; /* last element */

		if (*head == NULL) /*if head does not contain any node */
		{
			*head = new_node;
			return (*head);
		}
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		return (*head);

	}
	return (NULL);
}
