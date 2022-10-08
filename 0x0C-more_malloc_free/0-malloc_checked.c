#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - This allocates memory using malloc.
* @b: Input parameter.
* Return: 98 if malloc fails, therwise, ptr.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);

}
