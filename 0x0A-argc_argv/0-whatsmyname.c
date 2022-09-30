#include <stdio.h>

/**
* main - Entry point.
* @argc: Input parameter for argument count.
* @argv: Input parameter pointer to argument strings.
* Return: Always 0{Success).
*/

int main(int argc, char *argv[])
{

	if (argc == 1)
	{
		printf("%s\n", *argv);
	}

	return (0);
}
