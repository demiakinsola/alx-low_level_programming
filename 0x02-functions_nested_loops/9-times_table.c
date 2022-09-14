#include "main.h"
/**
*times_table - Entry point
*Description: This prints the 9 times table from 0.
*Return: void
*/
void times_table(void)
{
	int a, b, result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = a * b;

			if (b == 0)
			{
				_putchar(result + '0');
			}
			else if (b != 0 && result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
