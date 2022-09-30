#include "main.h"

/**
* _strlen_recursion - This returns the length of a string.
* @s: Input parameter pointer.
* Return: string length.
*/

int _strlen_recursion(char *s)
{
	int length;

	length = 0;
/* Get to the last element of the string. */
/* With each iteration, increase the length of the string. */

	if (*s != '\0')
	{
		length  =  _strlen_recursion(s + 1);
/* Increase length each time the function moves to another address */
		return (length + 1);
/* Return length + 1 to each parent function that calls */
/* a child function */
	}

	else
	return (length);
}
