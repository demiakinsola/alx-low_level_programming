#include "main.h"

/**
 * create_file - This function creates a file.
 * @filename: Pointer to file to be created.
 * @text_content: Pointer to file content.
 *
 * Return: On success, 1. Otherwise, -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length = 1; /* file descriptor */
	size_t count; /* no. of bytes */
	int ret_value;

	if (!filename) /* if it's NULL*/
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
	}
	if (text_content) /* if it's not NULL */
	{
		for (count = 0; text_content[count]; count++, length++)
			;
		length = length - 1;
		ret_value = write(fd, text_content, length);
		if (ret_value == -1)
			return (-1);
		return (1);
	}
	ret_value = write(fd, text_content, 0);
	if (ret_value == -1)
		return (-1);
	return (1);
}
