#include "main.h"

/**
* _strcat - This concatenates two strings.
* @dest: First input parameter pointer.
* @src: Second input parameter pointer.
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	int dest_length, i;

	for (dest_length = 0; dest[dest_length]; dest_length++)
	{

	}
/* dest_length */
/* This gives us the length of the string including the null byte*/

	for (i = 0; src[i]; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
/* This attaches the last element(last index - which is supposed */
/* to be the null byte) of dest. to the first index of src and */
/* keeps on incrementing till i is false(a null byte) */
	}

	dest[dest_length] = '\0';
/* since i terminates when it sees a null value but its length */
/* would have increased before terminating, the last index */
/* should be assigned to the null character */

	return (dest);
/* This returns the address of the first element of dest which */
/* is the starting address of the whole array the string is */
/* is pointing to. It automatically sees the other elements */
/* one after the other and stps when it sees the null character */
}
