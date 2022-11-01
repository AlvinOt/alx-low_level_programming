#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: pointer to memory area
 * @b: constant to fill memory wit
 * @n: bytes of memory area to fill
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int indx;

	for (indx = 0; indx < n; indx++)
	{
		s[indx] = b;

	}
	return (s);
}
