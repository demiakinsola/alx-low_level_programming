#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Desciption: Print the lowercase, then the uppercase alphabet
*
*Follow these by a new line
*
*Return: Always 0(Success)
*/

int main(void)
{
	int c, h;

	c = 97;
	h = 65;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	while (h < 91)
	{
		putchar(h);
		h++;
	}
	putchar(10);
	return (0);
}
