#include "main.h"
#include <stdio.h>

/**
* *_strchr - This locates a character in a string.
* @s: Input parameter pointer string.
* @c: Input parameter character.
*
* Return: Pointer to 1st occurrence of c in string s if found, otherwise NULL.
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (1) /* 1 means infinity */
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		else if (*(s + i) == '\0')
		{
			return (NULL);
	/* NULL is a pointer that points to nothing */
		}
		i++;
	}
	/* *(s + i) is the value at the address (s + i) */
	/* (s + i) is address of the 'ith' element. */

}
