#include <stdio.h>
/**
*main - Entry point
*
*Description: Print the lowercase alphabet in reverse order
*
*Return: Always 0(Success)
*/
int main(void)
{
	int a;

	a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
