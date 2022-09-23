#include "main.h"

/**
* leet - This encodes a string into 1337.
* *@s: Input parameter pointer.
* Return: character.
*/

char *leet(char *s)
{
	char letters[] = "aA eE oO tT lL";
	char numbers[] = "44 33 00 77 11";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
		/* since they are in the same position */
			}
		}
	}
	return (s);
}
