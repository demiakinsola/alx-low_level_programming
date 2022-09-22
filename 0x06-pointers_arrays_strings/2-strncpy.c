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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
/* i represents index here */

	for (i = 0; i < n; i++) /* src[i] means print while i is true */
	/* i represents the length oh the src string. */
	{
		dest[i] = '\0';
	}
	return (dest);
}
