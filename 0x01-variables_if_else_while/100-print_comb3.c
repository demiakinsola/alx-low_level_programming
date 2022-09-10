#include <stdio.h>
/**
*main - Entry point
*Description: Print all different combinations of two digits
*Return: Always 0(Success)
*/

int main(void)
{
	int a, b;

	a = 48;
	b = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				putchar(44);
				putchar(32);
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}
