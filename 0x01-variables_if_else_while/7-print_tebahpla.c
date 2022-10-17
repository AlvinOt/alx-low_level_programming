#include <stdio.h>

/**
 * main - Entry point
 * desc alphabet reverse
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'z', letter >= 'a'; letter--;)
		putchar(letter);

	putchar('\n');

	return (0);
}
