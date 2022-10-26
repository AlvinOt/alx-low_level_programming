#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string for printing
 */

void print_rev(char *s)
{
	int index= 0;

	while (s[index])
		index++;

	while (1--)
		_putchar(s[index]);
	putchar('\n');
}
