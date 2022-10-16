#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -prints if number is +ve, -ve, or0
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time((0)));
	n = rand() - RAND_MAX -	2;

	printf("%d\n", n);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
