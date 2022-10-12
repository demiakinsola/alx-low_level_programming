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
	free(d); /* Pointer parameter to structures */
}
