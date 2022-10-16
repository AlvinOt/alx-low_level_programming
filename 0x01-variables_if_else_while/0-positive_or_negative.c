#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -prints if number is +ve, -ve, or0
 * Return: 0
 */

int main(void)
{
	int rno;

	srand(time(0));
	rno = rand() - RAND_MAX / 2;

	printf("%d\n", rno)

	if (rnl > 0)
	{
		printf("%d is positive\n", rno)
	}
	else if (rno == 0)
	{
		printf("%d is zero\n", rno);
	}
	else
	{
		printf("%d is negative\n", rno);
	}

	return (0);
}
