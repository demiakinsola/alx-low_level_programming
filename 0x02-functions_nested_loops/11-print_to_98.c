#include "main.h"
/**
*print_to_98 - Entry point
*@n: Input argument
*Descrription: This prints natural numbers from n to 98.
*Return: void
*/

void print_to_98(int n)
{
	while (n < 99)
	{
		if (n >= 0 && n < 10)
		{
			_putchar((n / 10) + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n > 97)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		if (n == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
