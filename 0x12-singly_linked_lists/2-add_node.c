#include "lists.h"

/**
 * add_node - This functiondds a new node at the beginning of a linked list.
 * @head: Pointer to the first node in the list.
 * @str: String to be duplicated.
 * Return: Address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* new node */
	unsigned int i; /* to loop through the string */
	unsigned int length; /* length of the string */

	new_node = malloc(sizeof(list_t)); /* allocate memory for the new node */
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
	/* first method for string length: new_node->len = strlen(str); */
		length = 0;
		for (i = 0; str[i]; i++)
		{/* second method */
			length++;
		}
		new_node->len = length;
		new_node->next = *head;
		/* assign present node at head pointer to another node */

		*head = new_node; /* assign new node to head pointer */
		return (*head);
	}

	return (NULL);

}
