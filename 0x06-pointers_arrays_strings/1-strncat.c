#include "main.h"
/**
* _strncat - This concatenates two characters.
* it will use at most n bytes from src; and src does not need
* to be null-terminated if it contains n or more bytes.
*
* @dest: First input parameter pointer.
* @src: Second input parameter pointer.
* @n: Number of bytes to use from src.
*
*Return: pointer to the resulting string destination.
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_length, i;

	for (dest_length = 0; dest[dest_length]; dest_length++)
	{
/* dest[dest_length] means print dest_length if its value is true, */
/* that is, a non zero character */
	}
/* This gives us the length of dest string including the null byte */
	for (i = 0; src[i]; i++)
	{			/* Index starts from 0, so, i < n */
		if (i <= n - 1) /* If index <= no. of stated bytes */
		{
			dest[dest_length] = src[i];
			dest_length++; /* increase length */
/* Last element of dest == 1st element of src string, increment */
/* and assign them until i(index) is false. */
		}

		if (i >= n - 1) /* If index(src) >= no. of bytes */
		{
			return (dest);
		}
		else
		{
			dest[dest_length] = '\0';
		}
	}

	return (dest);
}
