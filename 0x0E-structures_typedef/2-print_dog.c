#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - This prints a struct dog.
* @d: Input parameter pointer to variable.
* Return: Void.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}

	printf("Age: %f\n", (*d).age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
