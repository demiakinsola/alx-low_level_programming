#include "main.h"

/**
* puts2 - This prints every other character of a string
* starting from the first character.
* @str: Input pointer parameter.
* Return: void.
*/

void puts2(char *str)
{
	int i, j;

	i = 0;

/* The value of j represents every other character */

	j = i + 1;

	for (i = 0; str[i]; i++)
	{
		for (j = i + 1; j >= 0; j++)
		{

		}
		if (i != j)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
