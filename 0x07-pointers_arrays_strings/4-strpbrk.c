#include "main.h"
#include <stdio.h>

/**
* *_strpbrk - This searches a string for first occurrence of any set
* of bytes present in another string.
*
* @s: Input parameter pointer string.
* @accept: Input parameter pointer for bytes substring.
*
* Return: Pointer to byte in s.
*/

char *_strpbrk(char *s, char *accept)
{
	int count1, count2;

	count1 = 0;
	for ( ; 1; count1++)
	{
		count2 = 0;
		for ( ; *(accept + count2) != '\0'; count2++)
		{
			if (*(s + count1) == *(accept + count2))
			{
				return (s + count1);
			}

			else if (*(s + count1) == '\0')
			{
				return (NULL);
			}
		}
	}
}
