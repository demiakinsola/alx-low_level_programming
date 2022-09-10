#include <stdio.h>
/**
*main - Entry point
*
*Description: Prit all single digit numbers of base 10 from 0
*
*Return: Always 0(Success)
*/
int main(void)
{
	int a;

	a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
