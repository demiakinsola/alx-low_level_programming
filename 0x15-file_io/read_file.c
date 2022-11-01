#include "main.h"

/**
 * read_file - This function reads from a file.
 * @file_from: Pointer to source file.
 * @buffer: Pointer to content copied.
 * Return: Number of bytes copied.
 */

int read_file(char *file_from, char *buffer)
{/* file descriptors and return values */
	int index, fd, ret_value, ret_val3;

	if (!file_from) /* if it's NULL */
		return (-1);
	fd = open(file_from, O_RDWR);
	if (fd == -1) /* if it doesn't exist */
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	for (index = 0; file_from[index] != '\0'; index++)
	{
		ret_value = read(fd, buffer, 1024);
	}
	if (ret_value == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ret_val3 = close(fd);
	if (ret_val3 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (ret_value);
}
