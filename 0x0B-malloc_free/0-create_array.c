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
	unsigned int count; /* count for size */

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		array = malloc(sizeof(*array) * size);
		count = 0;
		while (count < size)
	/* count starts from 0, size from 1 */
		{
			*(array + count) = c; /*dereferencing */
			count++;
		}
		return (array);
	}
}
