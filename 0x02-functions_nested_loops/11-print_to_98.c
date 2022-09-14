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
	for (n <= 98; n++)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}

	for (n >= 98; n--)
	{
		if (n > 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
}
