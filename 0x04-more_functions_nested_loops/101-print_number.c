#include "main.h"
/**
*print_number - This prints an integer.
*@n: Input argument
*Return: void
*/

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
