#include "main.h"

/**
* *rot13 - This encodes a string using rot13.
* @str: Input parameter pointer.
*
* Return: str.
*/

char *rot13(char *str)
{
	int i, j;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoder[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = encoder[j];
			}

			j++;
		}

		i++;
	}

	return (str);
}
