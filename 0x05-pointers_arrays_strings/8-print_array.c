#include "main.h"
#include <stdio.h>

/**
* print_array - This prints n elements of an array of integers.
* @a: Input parameter pointer.
* @n: Input parameter, number of elements.
* Return: void.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
/* i is less than n because it initialises from 0 */
/* e.g. if n = 5, 0 to 4 is 5 elements */
/* i is n - 1 because n is 5 and the last index should be 4 */
/* because i starts from 0. thus last index  = 5 - 1 */
/* it is n < n -1 for the first coondition because we don't want */
/* the last number to have space and comma */
/* it is n == n - 1 for the first condition because the last index */
/* is 4 (n - 1 = 5 -1 = 4) and that is what the 2nd condition is about*/
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
