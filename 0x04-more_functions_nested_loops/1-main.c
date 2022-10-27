#include "main.h"
#include <stdio.h>

/**
 * main - check code
 * Return: is 0
 */

int main(void)
{
	int c;

	c = '2';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'd';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
