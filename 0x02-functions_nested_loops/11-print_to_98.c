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
	int a, b;

	for (a = n; a <= 98; a++)
	{
		if (a < 98)
		{
			printf("%d, ", a);
		}
		else
		{
			printf("%d", a);
		}
		printf("\n");
	}

	for (b = n; b >= 98; b--)
	{
		if (b > 98)
		{
			printf("%d, ", b);
		}
		else
		{
			printf("%d", b);
		}
		printf("\n");
	}
}
