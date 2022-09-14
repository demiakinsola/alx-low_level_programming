#include "main.h"
/**
*_isalpha - Entry point
*Description: Checks for the alphabetic character
*@c: Input argument
*Return: 1 if a lowercase or uppercase letter, otherwise 0
*/

int _isalpha(int c)
{
	if (c > 97 && c <= 122)
	return (1);

	if (c > 65 && c <= 90)
	return (1);

	else
	return (0);
}
