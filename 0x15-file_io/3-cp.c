#include "main.h"

/**
 * main - This copies the content of a file into another.
 * @argc: Number of argument.
 * @argv: Pointer to string
 *
 * Return: On success, 0. Otherwise, -1.
 */

int main(int argc, char **argv)
{
	int ret; /* return value */
	char *buffer;

	buffer = malloc(sizeof(buffer)); /* allocate memory */
	if (buffer == NULL)
		return (-1);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ret = read_file(argv[1], buffer);
	write_file(argv[2], buffer, ret);
	return (0);
}
