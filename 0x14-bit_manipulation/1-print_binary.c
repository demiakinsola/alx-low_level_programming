#include "main.h"

/**
* print_binary - This prints the binary representation of a number.
* @n: Number to be printed in binary.
* Return: Void
*/

void print_binary(unsigned long int n)
{
	if (n > 1 && n > 0)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
