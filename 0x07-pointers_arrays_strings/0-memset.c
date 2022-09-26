#include "main.h"

/**
* *_memset - This fills the first n bytes of the memory area
* area pointed to by s with the costant byte b.
*
* @s: Input parameter pointer to memory area.
* @b: Input parameter constant byte.
* @n: Input parameter number of bytes.
*
* Return: Pointer to memory area 's'.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
