#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Description: Print all base 16 numbers
*
*Return: Always 0(Success)
*/

int main(void)
{
	char i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	i = 'a';

	while (i < 'g')
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
