#include <stdio.h>
/**
*main - Entry point
*
*Description: Print single digit numbers of base 10 from 0
*
*Return: Always 0(Success)
*/

int main(void)
{
	int c;

	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");
	return (0);
}
