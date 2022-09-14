#include"main.h"

/**
*print_sign - Entry point
*@n: Input argument
*Description: This prints the sign of a number
*Return:  1 if greater than 0, 0 if 0, -1 if less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

