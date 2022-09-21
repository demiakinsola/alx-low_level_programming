#include "main.h"
#include <stdio.h>

/**
* print_array - This prints n elements of an array of integers.
* @a: Input parameter pointer.
* @n: Input parameter.
* Return: void.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
	}

	printf("\n");
}
