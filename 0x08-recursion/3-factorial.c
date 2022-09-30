#include "main.h"

/**
* factorial - This  returns the factorial of a given number.
* @n: Input parameter for number.
* Return: Integer.
*/

int factorial(int n)
{
	int answer;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	else
	{
		answer = n * factorial(n - 1);
		return (answer);
	}


}
