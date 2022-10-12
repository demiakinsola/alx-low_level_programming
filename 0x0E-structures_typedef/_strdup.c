#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - This duplicates a string and returns a pointer to a newly
* allocated space in memory, which contains a copy of the string
* given as a parameter.
*
* @str: Input parameter string.
* Return: Pointer to allocated memory.
*/

char *_strdup(char *str)
{
	char *new_string;
	int count;

	new_string =  malloc(sizeof(str));

	if (new_string == NULL)
	{
		return (NULL);
	}
	count = 0;
	for ( ; *(new_string + count) != '\0'; count++)
	{
		if ((new_string + count) == NULL)
		{
/* Don't free it yet because another function will call this one */
	/* The calling function will free the used memory itself */
			return (NULL);
		}
	}
	count = 0;
	for ( ; *(str + count) != '\0'; count++)
	{
		*(new_string + count) = *(str + count);
	}
	return (new_string);
}
