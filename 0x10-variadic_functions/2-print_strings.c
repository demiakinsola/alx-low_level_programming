#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - This prints strings, followed by a new line.
* @separator: string to be printed between the strings.
* @n: Number of strings passed to the function.'
* Return: Void.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;/* counter */
	va_list ap; /* argument pointer */
/* initialize with argument before ellipsis */

	va_start(ap, n); /* initializes argument pointer */
	for (i = 1; i <= n; i++)
	{/* get next argument */
		string = va_arg(ap, char *);
		if (!string) /* if it's null */
		{
			string = "(nil)";
		}
		printf("%s", string);
	/* only characters are promoted to integers */
		if (separator != NULL && i != n)
		{
			printf("%s", separator);
		}
	}
/* string = va_arg(ap, char *); (string ? string :printf( "(nil)"); */
	printf("\n");
	va_end(ap);
}
