#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints addition of positive numbers and new line
 * @argc: number of arguments passed to program
 * @argv: array of ponters to arguments
 * Return: if number has non-digits, -1 else 0
 */

int main(int argc, char *argv[])
{
	int n, d, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}

	printf("%d\n", sum);


	return (0);
}
