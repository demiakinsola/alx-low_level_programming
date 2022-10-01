#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry point.
* @argc: Input parameter for argument count.
* @argv: Input parameter to string arguments.
* Return: Integer.
*/

int main(int argc, char *argv[])
{
	int result;
	int count;
	int i; /* index for chracters in the string. */

	result = 0;

	for (count = 1; count < argc; count++)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (argv[count][i] < '0' || argv[count][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

	}

	for (count = 1; count < argc; count++)
	{
		if  (argc > 1)
		{
			if (atoi(argv[count]) >= 0)
			{
				result += atoi(*(argv + count));
			}

			else
			{
				printf("0\n");
			}
		}
	}
		printf("%d\n", result);
		return (0);
}
