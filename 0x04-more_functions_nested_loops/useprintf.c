#include <stdio.h>

/**
 * main - check code
 * Return: is 0
 */

int main(void)
{
	char c;

	int _isdigit(int c)
	{
		if (c >= '0' && c <= '9')
			return (1);
		else
			return (0);
	}

	c = '2';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'd';
	printf("%c: %d\n", c, _isdigit(c));
	
	return (0);
}
