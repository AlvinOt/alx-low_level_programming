#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Is always 0
 */

int main(void)
{
	int decks;

	puts("enter no. of decks: ");
	scanf("%i", &decks);

	if (decks < 1)
	{
	/*
	 * puts("invalid number\n");
	 */
	return (1);
	}
	/**
	 * printf("those are %i cards\n", (decks * 52));
	 */
	return (0);
}
