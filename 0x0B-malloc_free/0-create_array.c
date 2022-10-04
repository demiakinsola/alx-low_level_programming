#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* *create_array - This creates an array of chars, and
* initializes it with a specific char.
* @size: Specified size of the array.
* @c: Input parameter.
* *Return: A pointer to the array or NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	char *array;  /* pointer to array */

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		array = malloc(sizeof(*array) * size);
		*(array + 0) = c;
		return (array);
	}
}
