#include <stdio.h>
#include "main.h"
/**
*print_to_98 - Entry point
*@n: Input argument
*Descrription: This prints natural numbers from n to 98.
*Return: void
*/

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
		n++;
	}

	while (n >= 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
		n--;
	}
	printf("\n");
}
