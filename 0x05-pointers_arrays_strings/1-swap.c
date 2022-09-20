#include "main.h"

/**
* swap_int - This swaps the value of two integers.
* @a: Pointer parameter
* @b: Pointer parameter
* Return": void
*/

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;

	d = *b;

	*a = d;

	*b = c;

}

