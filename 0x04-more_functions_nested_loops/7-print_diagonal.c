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
	j = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (i <= n)
	{
		while (j <= i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		i++;
		_putchar('\n');
	}
}
