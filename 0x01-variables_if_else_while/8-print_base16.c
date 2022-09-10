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
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	char j;

	j = 'a';

	while (j < 'g')
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
