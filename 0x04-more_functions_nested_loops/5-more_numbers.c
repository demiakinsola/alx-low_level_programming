#include "main.h"
/**
*more_numbers - This prints 10 times the numbers
*0 to 14 and a new line.
*Return: void
*/

void more_numbers(void)
{
	int a, b;

	for (a = 1; a < 11; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar(10);
	}
}
