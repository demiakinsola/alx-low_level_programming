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

	int first; /* normal array holder */
	int last;	/* Reverse array holder */
	int i, rev;

	rev = n - 1;

	for (i = 0; i < (n / 2); i++, rev--) /* n / 2 for no. of times the */
	/* characters wil interchange. */
	{
		first = a[i]; /* put the values of a and rev inside holders */
		last = a[rev];

		a[rev] = first; /* reverse their contents */

		a[i] = last;
/* first element of rev = last element of a */
	}
	return;
}
