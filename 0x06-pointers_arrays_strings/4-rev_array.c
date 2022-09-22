#include "main.h"

/**
* print_array - This reverses the content of an array of integers.
* @a: Input parameter pointer.
* @n: Number of elements of the array.
*
* Return: void.
*/

void reverse_array(int *a, int n)
{
	int i, j; /* Index */
	int rev[1000]; /* Reverse array */

	for (i = n - 1; i >= 0; i++)
	{
		for (j = 0; j < n; j++)
		{
			rev[j] = a[i];
/* first element of rev = last element of a */
	/* assign a to rev because a holds the array */
		}
	}

	a[j] = rev[j];
}
