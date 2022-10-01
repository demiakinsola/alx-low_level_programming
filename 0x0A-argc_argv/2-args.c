#include <stdio.h>

/**
* main - Entry point.
* @argc: Input parameter for count.
* @argv: Input parameter pointer to string.
* Return: Always 0(Success).
*/

int main(int argc, char *argv[])
{
	int count;

	count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}


	return (0);

}
