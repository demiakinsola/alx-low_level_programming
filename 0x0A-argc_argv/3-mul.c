#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point.
* @argc: Inpute parameter for argument count.
* @argv:Input parameter pointer to argument string.
* Return: On success, return 0, otherwise, return 1.
*/

int main(int argc, char **argv)
{
	int result;
	int count;

	result = 1;
	count = 1;

	if (argc > 2)
	{
		while (count < argc) /* argc is size, count is index */
		{
			result = result * atoi(argv[count]);
	/* atoi is to convert a string to an integer */
	/* count starts from 1 because we don't want to print */
	/* name of the program which is indexed as 0. */
			count++;
		}
		printf("%d\n", result);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
