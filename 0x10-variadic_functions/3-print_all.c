#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
* print_all - This function prints anything.
* @format: This is a list of types of arguments passed to the function.
* Return: Void.
*/
void print_all(const char * const format, ...)
{
	int count, size; /* to loop through format string */
	va_list ap; /* argument pointer */
	char *string;

	va_start(ap, format); /* initialize argument pointer */
	count = 0;
	while ((format) && *(format + count)) /* while its value isn't null */
	{ /* while format is not a null pointer */
		size = strlen(format); /* size of string */
		switch (format[count]) /* if it's not NULL */
		{
			case 'c': /* if the value == c */
				printf("%c", va_arg(ap, int));
				break; /* char is promoted to an int */
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break; /* float is promoted to double */
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
					string =  "(nil)";
				printf("%s", string);
				break;
		}
		if (count < size - 1 && (format[count] == 'c' ||  format[count] == 'i'
			|| format[count] == 'f' || format[count] == 's'))
		{
			printf(", ");
		}
		count++;
	}
	va_end(ap);
	printf("\n");
}
