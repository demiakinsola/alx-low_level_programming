#include "main.h"
#include <stdio.h>

/**
* *_strstr - This locates a substring. The _strstr() function finds the first
* occurrence of the substring needle in the string haystack. The
* terminating null bytes (\0) are not compared.
*
* @haystack: Input parameter pointer main string.
* @needle: Input parameter pointer substring.
*
* Return: Pointer to begeinning of located substring.
*/

char *_strstr(char *haystack, char *needle)
{
	int count1, count2;

	for (count1 = 0; 1; count1++)
	{
		for (count2 = 0; *(needle + count2) != '\0'; count2++)
		{
			if (*(haystack + count1) == *(needle + count2))
			{
				return (haystack + count1);
			}

		}

		if (*(haystack + count1) == '\0')
		{
			return (NULL);
		}
	}
}
