#include "main.h"

/**
 * int _strlen_recursion - prints length of a string
 * @s: the string whose length is printed
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s +1);
	}

	return (len);
}
