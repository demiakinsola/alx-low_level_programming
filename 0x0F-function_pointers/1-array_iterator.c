#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - This executes a function given as a parameter
* on each element of an array.
* @array: Input parameter pointer to array.
* @size: Size of array.
* @action: Pointer to function.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count; /* index for the array. */

	if (action != NULL && array != NULL)
	/* if it isn't pointing to a null address and array. */
	for (count = 0; count < size; count++)
	{
		action(*(array + count));
	}
}
