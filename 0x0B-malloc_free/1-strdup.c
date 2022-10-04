#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - This returns a pointer to a new string which
* is a duplicate of the string str.
* @str: Pointer to a string.
* Return: Pointer to the new string.
*/

char *_strdup(char *str)
{
	char *new_string;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		new_string = malloc(sizeof(str));
		if (new_string == NULL)
		{
			return (NULL);
		}

		count = 0;
		while (*(str + count) != '\0')
		{
			*(new_string + count) = *(str + count);
			count++;
		}
		return (new_string);
	}
}
