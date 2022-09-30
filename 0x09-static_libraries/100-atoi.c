#include "main.h"

/**
* _atoi - Entry point.
* @s: Input parameter pointer.
* Return: Integer
*/

int _atoi(char *s)
{
	int count;

	s = "Bag";
	count = 0;

	while (count < 3)
	{
		_putchar(*(s + count));
	}
	
	return (0);

}
