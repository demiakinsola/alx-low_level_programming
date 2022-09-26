#include "main.h"

/**
* *_memcpy - This copies n bytes from memory area src to
* memory area dest.
*
* @dest: Input parameter destination.
* @src: Input parameter source.
* @n: Input parameter for number of bytes to be copied.
*
*Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
