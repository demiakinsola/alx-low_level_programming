#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - This returns the sum of all its parameters.
* @n: Variable number of arguments.
* Return: Integer.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /* argument pointer */
	unsigned int i; /* counter */
	int result = 0;

	va_start(ap, n);
	/* initialise variable to argument before ellipsis */

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	} /* get value of next argument */
	va_end(ap);
	return (result);
}
