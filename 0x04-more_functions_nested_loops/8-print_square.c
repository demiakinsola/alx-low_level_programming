#include "main.h"
/**
*print_square - This prints a square
*@size: Input argument
*Return: void
*/
void print_square(int size)
{
	int n, o;

	n = 1;
	o = 1;

	if (size <= 0)
	{
		_putchar(10);
	}

	else if (size > 0)
	{
		while (n <= size)
		{
			while (o <= n)
			{
				_putchar(35);
				o++;
			}
			_putchar(10);
			n++;
		}
		_putchar(10);

	}
}
