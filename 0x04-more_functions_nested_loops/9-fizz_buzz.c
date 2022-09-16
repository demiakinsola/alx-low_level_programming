#include <stdio.h>

/**
*main - This the numbers from 1 to 100, followed by a new line.
*But for multiples of three print Fizz instead of the number and
*for the multiples of five print Buzz. For numbers which are
*multiples of both three and five print FizzBuzz.
*
*Return: Always 0(Success)
*/

int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz");
		}

		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		else
		{
			printf("%d", a);
		}

		if (a != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
