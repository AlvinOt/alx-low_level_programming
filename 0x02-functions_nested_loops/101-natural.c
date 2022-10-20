#include <stdio.h>

/**
 * main - natural nembers under 1024 that are multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; 1 < 1024; i++)
	{
		if ((i %  3) == 0 || (i % 5) == 0)
			sum += 1;
	}
	printf("%d\n", sum);

	return (0);
}
