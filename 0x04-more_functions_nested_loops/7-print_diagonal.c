#include "main.h"
/**
*print_diagonal - This print a diagonal line n times
*@n: Input argument
*Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;

	i = 1;
	j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else if (n > 0)
	{
		while (i <= n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
