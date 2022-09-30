#include "main.h"

/**
*_puts - This prints a string followed by a new line.
* @str: Input pointer parameter.
*Return: void.
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
