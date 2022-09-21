#include "main.h"

/**
* puts_half - This prints half of a string.
* @str: Input pointer parameter.
* Return: void.
*/

void puts_half(char *str)
{
	int i, length;
	int j, n;
/* n is to get half of the string */

	for (i = 0; str[i]; i++)
	{

	}

	length = i;

	if (length % 2 == 0)
	{
		n = length / 2;
/* j = n means j starts from the middle of the string */
		for (j = n; j < length; j++)
		{
			_putchar(str[j]);
		}
	}

	else
	{
		n = (length - 1) / 2;

		for (j = n + 1; j < length; j++)
		{
			_putchar(str[j]);
		}

	}

	_putchar('\n');
}
