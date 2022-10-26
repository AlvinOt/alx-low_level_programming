# include "main.h"

/**
 * _strlen - return string length
 * @s: the string whose length gets determined
 * Return: length of a @str
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
