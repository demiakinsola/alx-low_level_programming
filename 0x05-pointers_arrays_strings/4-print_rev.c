#include "main.h"

/**
* print_rev - This prints a tring in reverse.
* @s: Input pointer parameter.
* Return: void.
*/

void print_rev(char *s)
{
	int i, j;

	for (i = 0; 1; i++)
	{

	}
	for (j = i - 1; j >= 0; j--) /* j is (i -1) because i above will give */
	/* us the number of characters including the null character. */
	/* since the number of written elements should not include the */
	/* null character when writing a string - it is added automatically, */
	/* the number of written elements will be 1 less than the total */
	/* number. The j count starts from the back because we want to print */
	/* in reverse and it decrements from biggest to smallest index number */
	{
		_putchar(s[j]); /* print the jth number in the array */
	}
	_putchar('\n');
}
