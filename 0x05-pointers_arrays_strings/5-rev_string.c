#include "main.h"

/**
* rev_string - This reverses a string.
* This reverses a string and stores the reverse string as the new
* content of the string.
*
* @s: Input pointer parameter.
* Return: void
*/

void rev_string(char *s)
{
	int i, j, k;
	char rev[1000];
	/* This is to store the reverse string initially */

	for (i = 0; s[i]; i++)
	{

	}

/* i will return the total number of elements including the null character. */

	k = 0;
	for (j = i - 1 ; j >= 0; j--)
	/* j - 1 - 1 because the index does not start from the null */
	/* character but from the element before it */

	{
		rev[k] = s[j];
		k++;
	}
	/* initialise k to 0 so that rev can be an array */
	for (i = 0; s[i]; i++)
	{
		s[i] = rev[i];
	}
	_putchar('\n');
}
