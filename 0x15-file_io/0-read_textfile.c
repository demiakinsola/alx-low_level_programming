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
	int index, fd; /* file descriptor */
	int ret_letters = 0; /* letters read and printed */
	size_t write_bytes; /* number of bytes written */
	char *buffer;

	if (!filename) /* if it's null */
		return (0);
	fd = open(filename, O_CREAT | O_RDWR);
	if (fd == -1) /* if it fails to read the file */
	{
		return (0);
	}
	
	buffer = malloc(sizeof(char) * letters);
	if (!buffer) /* if mlloc fails */
		return (0);

	write_bytes = write(fd, buffer, letters);

	if (write_bytes < letters || !write_bytes)
		return (0);

	read(fd, buffer, letters);
	for (index = 0; buffer[index]; index++)
	{
		dprintf(fd, "%c", buffer[index]);
		ret_letters++;
	}
	close(fd);
	return (ret_letters);
}
