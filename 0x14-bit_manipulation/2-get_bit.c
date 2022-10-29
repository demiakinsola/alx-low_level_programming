#include "main.h"

/**
 * get_bit - This returns the value of a bit at a given index.
 * @n: Number in question.
 * @index: Index of the bit.
 *
 * Return: Value of index on success, otherwise, -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0; /* counter for index */
	int value; /* value at index */

	if (n == 0 && index > 64)
		return (-1);

		for (count = 0; count <= 63; n >>= 1, count++)
		{
			if (index == count)
				return (n & 1);
		}

	return (-1);

}
