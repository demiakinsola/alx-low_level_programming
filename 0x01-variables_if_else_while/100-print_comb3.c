#include <stdio.h>
/**
*main - Entry point
*Description: Print all possible different combinations of two digits
*Return: Always 0(Success)
*/

int main(void)
{
	int a, b;

	a = 48; /* 48 means 0 on the ascii table */
	b = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58) /* 58 means :. It comes after 57 which means 9 */
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == 56 && b == 57)
				{
					break;
				}
				putchar(44); /* 44 means comma */
				putchar(32); /* 32 means space */
			}
			b++;
		}
		a++;
	}
	putchar(10); /* 10 means print a new line */
	return (0);
}
