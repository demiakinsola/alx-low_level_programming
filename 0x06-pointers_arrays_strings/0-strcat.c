#include "main.h"

/**
* _strcat - This concatenates two strings.
* @dest: First input parameter pointer.
* @src: Second input parameter pointer.
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
		_putchar(dest[i]);
	}

	for (j = 0; src[j]; j++)
	{
		_putchar(src[j]);
	}
	_putchar(src['\0']);

	return (dest);
}
