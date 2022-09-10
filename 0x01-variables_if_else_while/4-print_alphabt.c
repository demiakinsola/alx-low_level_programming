#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*
*Description - Print the lowercase alphabet except q and e
*
*Return: Always 0(Success)
*/
int main(void)
{	int a;

	a = 97;

	while (a < 123)
	{
		if (a != 113 && a != 101)
		{
		putchar(a);
		}
		a++;
	}
	putchar(10);
	return (0);
}
