#include "main.h"

/**
* puts2 - This prints every other character of a string
* starting from the first character.
* @str: Input pointer parameter.
* Return: void.
*/

void puts2(char *str)
{
	int i;


	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0) /* every other chaacter is odd */
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
