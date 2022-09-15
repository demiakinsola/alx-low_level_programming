#include "main.h"
/**
*print_diagonal - This draws a diagonal line on the terminal
*for n times.
*@n: Input argument
*Return: void
*/

void print_diagonal(int n)
{
	int i;

	i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(92);
		i++;
		_putchar('\n');
	}
}
