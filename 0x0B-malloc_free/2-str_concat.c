#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - This concatenates two strings.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 * Return: Pointer to newly allocated memory space.
 */

char *str_concat(char *s1, char *s2)
{
	int count, count2;
	char *new_string;

	new_string = malloc(sizeof(s1) + sizeof(s2));

	if (new_string == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (*(s1 + count) != '\0')
	{
		*(new_string + count) = *(s1 + count);
		count++;
	}
	count2 = 0;
	while (*(s2 + count2) != '\0')
	{
		*(new_string + count) = *(s2 + count2);
		count2++;
		count++;
	}
	*(new_string + count) = '\0';
	return (new_string);
}
