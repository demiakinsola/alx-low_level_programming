#include "main.h"

/**
* string_toupper - This changes all lowercase letters of a string
* to uppercase.
* @str: Input parameter pointer.
* Return: str.
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++) /* Run through the string */
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
