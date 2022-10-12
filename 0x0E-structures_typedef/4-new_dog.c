#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *new_dog - This function creates a new dog.
* @name: Input parameter number.
* @age: Input parameter number.
* @owner: Input parameter number.
* Return: Pointer to address new dog structure.
*/

dog_t *new_dog(char *name, float age, char *owner)
{ /* dog_t is the synonymn for the struct dog type */
	dog_t *new; /* new structure variable but same members */

	new = malloc(sizeof(dog_t)); /* size of the whole structure */
	/* Since it;s a whole structure we want to replicate */

	if (new == NULL) /* If malloc returns a null address */
	{
		return (NULL);
	}
/* Else, create a memory fror each string */
/* Call the _strdup function which already allocates memory */
/* And copies the previous string into the t=new one */
/* new->name == (*new),=.name == char *name) */
	/*It's just in the new structure type */
	new->name = _strdup(name);
		if (new->name == NULL) /* ret.value of called func */
		{
			free(new);
		}
	new->age = age; /* dereference to get value of age */

	(*new).owner = _strdup(owner);
	if ((*new).owner == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
