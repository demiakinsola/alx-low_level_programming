#include "main.h"

/**
*print_triangle - This prints a triangle
*@size: Input argument
*Return: void
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
