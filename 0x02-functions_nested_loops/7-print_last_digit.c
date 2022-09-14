#include "main.h"
/**
*print_last_digit - Entry point
*@n: Input argument
*Description: This prints the last digit of a number.
*Return: result
*/

int print_last_digit(int n)
{
	int result;

	if (n >= 0)
	{
		result = n % 10;
	/* This prints the last digit of a number */
		_putchar(result + '0');
		return (result);
	}

	else
	{
		result = -1 * (n % 10);
		_putchar(result + '0');
		return (result);
	}
}
