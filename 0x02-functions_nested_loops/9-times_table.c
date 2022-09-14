#include "main.h"
/**
*times_table - Entry point
*Description: This prints the 9 times table from 0.
*Return: void
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			_putchar(c + '0');
			if (a == 9 && b < 10)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
