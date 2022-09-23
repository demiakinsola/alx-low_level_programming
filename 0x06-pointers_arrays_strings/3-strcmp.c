#include "main.h"

/**
* _strcmp - This compares two strings.
* @s1: First input parameter pointer.
* @s2: Second input parameter pointer.
*
* Return: integer.
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == 0)
		break;
	}
/* is both are equal, and s1 is 0, break and return result. */
/* If both are not equal, return result. */

	return (s1[i] - s2[i]);
}
