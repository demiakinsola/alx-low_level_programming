#include "main.h"

/**
* reverse_array - This reverses the content of an array of integers.
* @a: Input parameter pointer.
* @n: Number of elements of the array.
*
* Return: void.
*/

void reverse_array(int *a, int n)
{
	int i, j, k; /* Index */
	int rev[n]; /* Reverse array */

	for (i = n - 1; i >= 0; i++)
	{
		for (j = 0; j < n; j++)
		{
			rev[j] = a[i];

			if (j != n -1)
			{
				_putchar(',');
				_putchar(' ');
			}
/* first element of rev = last element of a */
	/* assign a to rev because a holds the array */
		}
	}
	for (k = 0; k < n; k++)
	{
		a[k] = rev[j];
	}
	return;
}	
