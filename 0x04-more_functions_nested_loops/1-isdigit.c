#include "main.h"

/**
*_isdigit - This checks for a digit
*@c: Input arguement
*Return: 1 if a digit, 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
