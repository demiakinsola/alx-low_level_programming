#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0(Success)
*/
/* Generate random numbers */

/* Print the last digit of these numbers */

/* Determine whether they are less than, greater than or equal to zero */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
