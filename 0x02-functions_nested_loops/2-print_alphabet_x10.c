#include "main.h"
/**
*print_alphabet_x10 - Entry point
*Description: Prints 10 times the lowercase alphabet.
*Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 1;

	while (i < 11)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
