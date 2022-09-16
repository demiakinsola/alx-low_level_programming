#include "main.h"
/**
*print_square - This prints a square
*@size: Input argument
*Return: void
*/
void print_square(int size)
{
	int n, p;

	if (size <= 0)
	{
		_putchar(10);
	}

	else
	{
		for (n = 0; n < size; n++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
