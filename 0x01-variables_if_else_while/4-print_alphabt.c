#include <stdio.h>

/*
 * main - Entry point
 *description - prints alphabet except e and q
 * return : Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		if (letter != 'e' && letter != 'q')
			put char (letter);
	}
	put char('\n');

	return (0);
}
