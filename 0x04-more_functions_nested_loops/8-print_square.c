#include "main.h"
/**
*print_square - This prints a square
*@size: Input argument
*Return: void
*/
void print_square(int size)
{
	int n, p;

	n = 0;
	p = 0;

	if (size <= 0)
	{
		_putchar(10);
	}

	else
	{
		while (n < size)
		{
			while (p < size)
			{
				_putchar(35);
				p++;
			}
			_putchar(10);
			n++;
		}
	}
}
