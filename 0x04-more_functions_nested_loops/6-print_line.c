#include "main.h"
/**
*print_line - This draws a straight line in the terminal
*for n times.
*@n: Input argument
*Return: void
*/

void print_line(int n)
{
	int b;

	b = 1;

	while (b <= n)
	{
		_putchar('_');
		b++;
	}
}
