#include "main.h"

/**
 *  read_textfile - This reads a textfile and prints it to
 *  POSIX standard output.
 *  @filename: Pointer to pathname.
 *  @letters: Number of letters to be read and printed.
 *
 *  Return: Actual number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	int ret_value, write_bytes;
	size_t ret_bytes; /* number of bytes written */
	char *buffer;

	if (!filename) /* if it's null */
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* if it fails to read the file */
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer) /* if malloc fails */
	{
		return (0);
	}

	write_bytes = read(fd, buffer, letters);
	if (write_bytes == -1)
		return (0);

	ret_bytes = write(1, buffer, write_bytes);
	ret_value = ret_bytes;
	if (ret_value == -1)
		return (0);
	if (ret_bytes < letters)
		return (0);
	close(fd);
	return (ret_bytes);
}
