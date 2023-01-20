#include "main.h"

/**
 * _strpbrk - search string for bytes set
 * @s: string searched
 * @accept: bytes searched for
 * Return: pointer to matched byte else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
