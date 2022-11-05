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
	ssize_t w_bytes, read_bytes; /* number of bytes written and read */
	char *buffer;

	if (!filename) /* if it's null */
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* if it fails to read the file */
		return (0);
	buffer = malloc(sizeof(char) * letters); /* allocate memeory */
	if (!buffer) /* if malloc fails */
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (w_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (w_bytes != read_bytes)
		return (0);
	close(fd);
	return (w_bytes);
}
