#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - This frees the dmemory allocated to dogs structure.
* @d: Input parameter pointer to structure variable.
* Return: Void.
*/

void free_dog(dog_t *d)
{
	if (d != NULL) /* confirm that it is not freed already */
	{	/* free each pointer to char's memory */
		free(d->name); /* pointer accessing a member */
		free((*d).owner);
		free(d); /* Pointer parameter to structures */
}
