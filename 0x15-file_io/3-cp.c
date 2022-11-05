#include "main.h"
/* function declaration */
int read_file(char *file_from, char *buffer);
int write_file(char *file_to, char *buffer, size_t bytes);
/**
 * main - This copies the content of a file into another.
 * @argc: Number of argument.
 * @argv: Pointer to string
 *
 * Return: On success, integer. Otherwise, -1.
 */

int main(int argc, char **argv)
{
	int ret, ret2; /* return value */
	char buffer[1024];

	if (argc != 3)
	{
		exit(97);
		dprintf(2, "Usage: cp file_from file_to\n");
	}
	ret = read_file(argv[1], buffer);
	ret2 = write_file(argv[2], buffer, ret);
	return (ret2);
}

/**
 * read_file - This reads the content of a file.
 * @file_from: file to read from.
 * @buffer: storage to read to.
 * Return: Number of bytes read.
 */

int read_file(char *file_from, char *buffer)
{/* file descriptors and return values */
	int index, fd, ret_value, ret_val2;

	if (!file_from)
		return (-1);
	fd = open(file_from, O_RDWR);
	if (fd == -1)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
	}

	for (index = 0; file_from[index] != '\0'; index++)
	{
		ret_value = read(fd, buffer, 1024);
	}
	if (ret_value == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_from);
	ret_val2 = close(fd);
	if (ret_val2 == -1)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %d\n", fd);
	}
	return (ret_value);
}

/**
 * write_file - This writes from buffer to a file.
 * @file_to: File to write to.
 * @buffer: Buffer to write from.
 * @bytes: Number of bytes to write to a file.
 * Return: Number of bytes written.
 */

int write_file(char *file_to, char *buffer, size_t bytes)
{/* file descriptor and return values */
	int fd, ret_val, ret_val3;

	if (!file_to)
		return (-1);
	fd = open(file_to, O_RDWR | O_TRUNC);
	if (fd == 0)
		return (0);
	if (fd == -1)
		fd = open(file_to, O_RDWR | O_CREAT, 0664);
			if (fd == -1)
			{
				exit(99);
				dprintf(2, "Error: Can't write to %s\n", file_to);
			}
	ret_val = write(fd, buffer, bytes);
	if (ret_val == -1)
	{
		exit(99);
		dprintf(2, "Error: Can't write to %s\n", file_to);
	}
	ret_val3 = close(fd);
	if (ret_val3 == -1)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %d\n", fd);
	}
	return (ret_val);
}
