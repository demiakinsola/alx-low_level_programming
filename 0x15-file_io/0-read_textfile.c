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
	int fd, index; /* file descriptor */
	size_t write_bytes, ret_bytes; /* number of bytes written */
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

	ret_bytes = write(1, buffer, write_bytes);
	if (ret_bytes < letters || !ret_bytes)
		return (0);
	close(fd);
	return (ret_bytes);
}
