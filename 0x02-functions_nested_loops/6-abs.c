#include "main.h"
/**
*_abs - Entry point
*@n: Input argument
*Description:  This computes the absolute value of an integer
*Return: 0
*/

int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n * (-1);
	}
	else if (n == 0)
	{
		result = 0;
	}

	else
	{
		result = n;
	}
	_putchar('\n');
	return (0);
}
