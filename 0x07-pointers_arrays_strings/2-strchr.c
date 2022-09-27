#include "main.h"
#include <stdio.h>

/**
* *_strchr - This locates a character in a string.
* @s: Input parameter pointer string.
* @c: Input parameter character.
*
* Return: Pointer to first occurrence of c in string s.
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
