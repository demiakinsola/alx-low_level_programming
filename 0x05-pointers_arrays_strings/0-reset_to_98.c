#include "main.h"

/**
* reset_to_98 - This updates the value it points to.
* @n: Pointer parameter.
* Return: Void
*/

void reset_to_98(int *n)
{
	int i;

	i = 0;
	n = &i;

	if (i >= 0 || i <= 0)
	{
		*n = i;

		*n = 98; /* This accesses the value stored in the pointers address */
		/* and changes it to 98 */

		i = *n;
		_putchar(i / 10);
		_putchar(i % 10);
	}
}
