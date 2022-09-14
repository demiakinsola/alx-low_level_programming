#include "main.h"
/**
*print_to_98 - Entry point
*@n: Input argument
*Descrription: This prints natural numbers from n to 98.
*Return: void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}

	else if (n > 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	else
	_putchar(n + '0');
}
