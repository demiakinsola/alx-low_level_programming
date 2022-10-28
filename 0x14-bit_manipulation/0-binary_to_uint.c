#include "main.h"

/**
 * binary_to_uint - This converts a binary number to an unsigned int.
 * @b: Pointer to string of 0 and 1 chars.
 * Return: Converted number. on success, 0 on failure.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int index, power; /* index for string */

	if (!b) /* if it is pointing to a NULL address */
		return (0);

	result = 0;

	for (index = 0; b[index]; index++) /* to get strig lengt */
	{
		;
	}
	/* index-- to remove null byte */
	for (index--, power = 1; index >= 0; index--, power *= 2)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		if (b[index] & 1) /* if b[index] & 1 = 1 */
			result += power;
	}
	return (result);
}
