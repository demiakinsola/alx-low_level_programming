#include "main.h"

/**
 * write_file - This writes to a file using system calls.
 * @file_to: File to write out to.
 * @buffer: Buffer to write from.
 * @bytes: number of bytes to write out.
 * Return: Integer.
 */

int write_file(char *file_to, char *buffer, size_t bytes)
{
	int fd; /* file descriptor */
	int ret_value, close_value; /* return value */

	if (!file_to)
		return (-1);
	fd = open(file_to, O_RDWR | O_TRUNC);
	if (fd == -1)
	{
		fd = open(file_to, O_RDWR | O_CREAT, 0644);
		if (fd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	ret_value = write(fd, buffer, bytes);
	if (ret_value == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	close_value = close(fd);
	if (close_value == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (ret_value);
}
