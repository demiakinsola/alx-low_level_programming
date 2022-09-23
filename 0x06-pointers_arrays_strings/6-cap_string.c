#include "main.h"

/**
* cap_string - This  capitalizes all words of a string..
* @str: Input parameter.
* Return: str
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}

		else
		{
			if str[i] == (' ' || '\t' || '\n' || '.' || ',' || '!' || '?' || '"' || '(' || ')' || '{' || '}')
			{
				str[i] = str[i + 1];
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
	/* i + 1 means next value after the above */
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
