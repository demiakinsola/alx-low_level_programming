#include <stdio.h>

/**
* main - Entry point.
* @argc: Input argument count.
* @argv: Input parameter pointer to string arguments.
* Return: Always 0(Success).
*/

int main(int argc, char *argv[])
{
	(void)argv; /* because it is unused */

	printf("%d\n", argc - 1);
	return (0);
}
