#include "main.h"

/**
* *rot13 - This encodes a string using rot13.
* @*str: Input parameter pointer.
*
* Return: str.
*/

char *rot13(char *str)
{
	int i, j;
	char letters[] = "Aa Bb Cc Dd Ee Ff Gg Hh Ii Jj Kk Ll Mm";
	char encoder[] = "Nn Oo Pp Qq Rr Ss Tt Uu Vv Ww Xx Yy Zz";

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

		while (letters[j] != '\0' && encoder[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = encoder[j];
			}

			else if (str[i] == encoder[j])
			{
				str[i] = letters[j];
			}

			j++;
		}

		i++;
	}

	return (str);
}
