# include "main.h"

/**
 * _strlen - return string length
 * @str: the string whose length gets determined
 * Return: length of a @str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s[length])
		length++;
	return (length);
}
