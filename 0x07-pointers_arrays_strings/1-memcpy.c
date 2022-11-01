#include "main.h"

/**
 * _memcpy - cpies bytes from memory area
 * @dest: pointer to memory area to copy into
 * @src: source buffer to copy character
 * @n: number of bytes to copy
 * Return: a pointer to destination buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
