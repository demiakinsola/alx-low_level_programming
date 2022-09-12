#include <stdio.h>
/**
*main - Entry point
*Description: Print all combinations of two-two digit numbers
*Return: Always 0(Success)
*/

int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar((' '));
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
/*
* / 10 means to print the first digit of a number
* % 10 means to print the last digit of a number
* + '0' means to convert a character to 0 since putchar
* ... prints characters
*/
			if (a == 98 && b == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
