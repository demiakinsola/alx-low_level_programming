#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - This concatenates two strings.
* @s1: Pointer to first string.
* @s2: Pointer to second string.
* @n: Input parameter for n bytes.
* Return: address to memory allocated.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr; /* stores the allocated memory address */
	unsigned int first_address, second_address;

/* using sizeof(s2) and not getting the length because size of a char is 1 */
/* so, the int n size can tally with size of(s2) */

	first_address = sizeof(s1) - 1; /* to remove the null byte */
	second_address = sizeof(s2) - 1;

	if (n < second_address) /* this is the length of s2 */
	{
		second_address = n; /* to get n bytes of string s2 */
		ptr = malloc(first_address + n + 1);
	}

	else
	{
		ptr = malloc(first_address + sizeof(s2));
	}

		return (ptr);

/* you can now include the null byte of the second string */


	if (ptr == NULL)
	{
		return (NULL);
	}
}
