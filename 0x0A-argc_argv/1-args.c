#include <stdio.h>

/**
 * main - prints number of arguments passed into main
 * @argc: number of arguments in the command line
 * @argv: name of array
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
