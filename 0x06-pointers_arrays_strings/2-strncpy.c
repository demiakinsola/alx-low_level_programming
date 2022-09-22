#include "main.h"

/**
* _strncpy - This copies a string.
* @dest: First input parameter pointer.
* @src: Second input parameter pointer.
* @n: Index number parameter(most bytes stated).
*
*Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

/* i represents index here */

		for (i = 0; src[i]; i++)
		/* i represents the length of the src string. */
		{
			if (i < n)
			{
				dest[i] = '\0';
			}
		}
	}
	return (dest);
}
