#include "main.h"

/**
* _puts_recursion - This prints a string, followed by a new line.
* @s: Input parameter pointer.
* Return: Void.
*/

void _puts_recursion(char *s)
{
	int index;

	index = 0;

	if (*(s + index) != '\0')
	{
		_putchar(*(s + 0)); /* first element's value */
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
