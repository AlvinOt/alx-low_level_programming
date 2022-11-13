#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints two numbers multiplied and new line
 * @argc: number of arguments to the program
 * @argv: array of pointers to argument
 *
 * Return: for two arguments, 0 else -1
 */

int main(int argc, char *argv[])
{
	int n1, n2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prod = n1 * n2;

	printf("%d\n", prod);

	return (0);
}
