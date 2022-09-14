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
			if (result < 10)
			{
				_putchar((result % 10) + '0');
			}
	/**
	*The above is to get the last number for single digits
	*since putchar prints one character at a time
	*and the ascii table stops at integer 9.
	*The below is to get the first and last number of two-digits one
	*at a time. You have to convert it to the decimal value
	of ascii table by adding 48 or '0'
	*/
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (b == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
