#include "main.h"

/**
 * _strchr - lcoates string character
 * @s: string searched
 * @c: character located
 * Return: pointer if c found else null
 */

char *_strchr(char *s, char c)
{
	int indx;

	for (indx = 0; s[indx] >= '\0'; indx++)
	{
		if (s[indx] == c)
			return (s + indx);
	}
	return ('\0');
}
