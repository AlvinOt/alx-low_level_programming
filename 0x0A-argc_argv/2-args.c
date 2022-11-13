#include <stdio.h>

/**
 * main - prints arguments received
 * @argc: argumments supplied to program
 * @argv: array of pointers to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);


	return (0);

}
