#include "main.h"
/**
*print_alphabet - This prints the lower case alphabet
*
*Return: 0
*/

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
