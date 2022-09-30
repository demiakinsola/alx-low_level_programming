#include "main.h"

/**
* _print_rev_recursion - This prints a string in reverse.
* @s: Input parameter pointer.
* Return: void.
*/

void _print_rev_recursion(char *s)
{

	if (*s != '\0') /* value of s at each iteration */
	{
		_print_rev_recursion(s + 1);
/* This takes us, gradually, to the last element before '\0 */

		_putchar(*s);
/* This prints the element at each adress from the last */
/* instance (element) to the first. */
	}

	else
	{
		return;
/* return when it is equal to a null byte. */
	}
}
