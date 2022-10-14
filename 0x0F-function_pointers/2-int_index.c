#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - This searches for an integer and returns the index
* of the first element for which the cmp function does not return 0.
* @array - Pointer to array of integers.
* @size: Number of elements in the array.
* @cmp: Pointer to function.
* Return: Integer.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int count; /* array index */
	if (cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		else
		{
			for (count = 0; count < size; count++)
			{ /* executes the function then checks its return value */
				if (cmp(*array) != 0)
		/* return value of the called function */
				{
					return (count); 
			/* return index of 1st element */
				}

				else
				{
					return (-1);
				}
			}
		}

	}
}
