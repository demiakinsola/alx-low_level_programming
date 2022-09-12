#include <stdio.h>
/**
*main - Entry point
*Description: Print all different combinations of three digits
*Return: Always 0(Success)
*/

int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar((a % 10) + '0');
				/* % 10 means print the last digit */
				/* + '0' tells the machine to covert the characters to numbers since putchar prints characters */ 
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if (a == 7 && b == 8 && c == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
