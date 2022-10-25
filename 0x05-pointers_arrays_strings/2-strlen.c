# include "main.h"

/**
 * _strlen - return string length
 * @str: the string whose length gets determined
 * Return: length of a @str
 */
size_t _strlen(char *str)
{
	size_t length = 0;

	while (*str[length])
		length++;
	return (length);
}
