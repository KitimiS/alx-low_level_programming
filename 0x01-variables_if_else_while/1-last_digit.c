#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print last digit of a radonmly generated number
 * determin if it's greater than 5,
 * less than 6 or 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
