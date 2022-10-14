#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - This searches for an integer and returns the index
* of the first element for which the cmp function does not return 0.
* @array: Pointer to array of integers.
* @size: Number of elements in the array.
* @cmp: Pointer to function.
* Return: Integer.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int count; /* array index */

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp && array) /* if both aren't equal to null) */
	{
		for (count = 0; count < size; count++)
		{ /* executes the function then checks its return value */
			if (cmp(*(array + count)) != 0)
	/* return value of the called function */
			{
				return (count);
		/* return index of 1st element */
			}

		}
	}

	/* if its equal to NULL or 0) */
			return (-1);

}
