#include "main.h"

/**
 * append_text_to_file - This appends text to end of a file.
 * @filename: Pointer to text file.
 * @text_content: Content to be appended.
 *
 * Return: 1 on success, otherwise, -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor value */
	int index; /*index of tex_content string */
	size_t length = 1; /*string length, 1 cause of null byte */
	int ret_value; /* return value */

	if (!filename) /* if it's NULL */
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content) /* if it exists */
	{
		for (index = 0; text_content[index]; index++, length++)
			;
		ret_value = write(fd, text_content, length);
		if (ret_value == -1)
			return (-1);
		return (1);
		close(fd);
	}
	return (-1);

}
