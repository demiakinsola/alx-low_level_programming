#include "main.h"
/**
*times_table - Entry point
*Description: This prints the 9 times table from 0.
*Return: void
*/

void times_table(void)
{
	int a, b, c;

	a = 0;
	b = 0;
	c = a * b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar(c + '0');
			if (a == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
