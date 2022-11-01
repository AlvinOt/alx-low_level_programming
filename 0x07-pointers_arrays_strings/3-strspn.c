#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: string searched
 * @accept: prefix measured
 * Return: bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int indx;

	while (*s)
	{
		for (indx = 0; accept[indx]; indx++)
		{
			if (*s == accept[indx])
			{
				bytes++;
				break;
			}
			else if (accept[indx + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
