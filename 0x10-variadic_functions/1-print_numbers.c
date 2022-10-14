#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
* print_numbers - This prints numbers, followed by a new line.
* @separator: String to be printed between numbers.
* @n: Number of integers passed to the function.
* Return: Void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;/* counter */
	va_list ap; /* argument pointer */

	va_start(ap, n);/* intialize argument pointer */
	for (i = 1; i <= n; i++)
	{/* get the next argument */
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
