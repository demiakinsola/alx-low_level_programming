#include "main.h"

/**
* cap_string - This  capitalizes all words of a string..
* @str: Input parameter.
* Return: str
*/

char *cap_string(char *str)
{
	int i, j;
	char separators[] = {'\t', '\n', '.', ',', ' ', '!',
				'?', '"', '(', ')', '{', '}'};


	for (i = 0; str[i]; i++)
	{
		if (str[i] == 0 && str[i] >= 97 && str[i] <= 122)
		/* 1st letter or element */
		{
			str[i] = str[i] - 32;
		}


		else
		{
			for (j = 0; separators[j]; j++)
			{
				if (str[i] == separators[j])
				{
		/* str[i + 1] is the next element after separator */
					if (str[i + 1] >= 97 && str[i + 1] <= 122)
					{
	/* i + 1 means next value after the above */
						str[i + 1] = str[i + 1] - 32;
					}
				}
			}
		}
	}
	return (str);
}
