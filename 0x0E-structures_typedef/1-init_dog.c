#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This initializes a variable of type struct dog.
 * @d: Pointer to structure variable.
 * @name: Input parameter field.
 * @age: Input parameter field.
 * @owner: Input parameter field.
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
/* To initialize an array, return its address and dereference pointer */
/* You do not need to return the address of the age variable. */
/* It was not declared as a pointer (float *age) */
	if (d != NULL)
	{
		(*d).name = name; /* d->name */
		d->age = age;
		(*d).owner = owner;
	}
}
