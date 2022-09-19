#include "main.h"

/**
* swap_int - This swaps the value of two integers.
* @a: Pointer parameter
* @b: Pointer parameter
* Return": void
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*b = i;

	*a = *b;

}

