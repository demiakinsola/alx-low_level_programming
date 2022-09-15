#include "main.h"
/**
*print_numbers - This prints numbers 0 to 9
*
*Return: void
*/

void print_numbers(void)
{
	int c;

	c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
