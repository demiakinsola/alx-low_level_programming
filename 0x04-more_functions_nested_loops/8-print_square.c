#include "main.h"
/**
*print_square - This prints a square
*@size: Input argument
*Return: void
*/
void print_square(int size)
{
	int n;

	n = 1;

	if (size <= 0)
	{
		_putchar(10);
	}

	else if (size > 0)
	{
		while (n <= size)
		{
			_putchar(35);
			n++;
		}
		_putchar(10);
	}

}
