#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Description: Print the lowercase alphabet
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar(10);
	return (0);
}
