#include "main.h"

/**
 * read_write - This function reads from a file.
 * @file_from: Pointer to source file.
 * @buffer: Pointer to content copied.
 *@file_to: Pointer to destination file.
 * Return: Number of bytes copied.
 */

int read_write(char *file_from, char *buffer, char *file_to)
{
	int index, fd, fd2, ret_val1, ret_val2, ret_val3;

	if (!file_from && file_to) /* if it's NULL */
		return (-1);
	fd = open(file_from, O_RDWR);
	if (fd == -1) /* if it doesn't exist */
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	for (index = 0; buffer[index] !='\0'; index++)
		ret_value = read(fd, buffer, 1024);
	if (ret_value == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);    	        exit(98);
	}
	fd2 = open(file_to, O_TRUNC | O_RDWR);
	if (fd2 == -1)
	{
		fd2 = open(file_to, O_CREAT | O_RDWR, 0644);
		if (fd2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	ret_value2 = write(fd2, buffer, ret_value);
	if (ret_value2 ==  -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	ret_val3 = close(fd);
	if (ret_val3 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
	exit (0);
}
