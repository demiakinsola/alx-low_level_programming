#include "main.h"

/**
* _strspn - This gets the length of a prefix substring.
* @s: Input parameter pointer string.
* @accept: Input parameter pointer prefix substring.
*
*Return: Unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	unsigned int i, j;

	i = 0; /* count for substring */
	j = 0;	/* count for main strng */
	length = 0;

	for ( ; *(s + j) != 0; j++)
	{
		if (*(s + j) == ' ')
		{
			break;
/* Because we only need the first part of the string */
		}

		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + j) == *(accept + i))
			{
				length++;
			}

		}
	}

	return (length);
}
