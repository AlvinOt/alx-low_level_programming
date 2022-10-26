#include "main.h"

/**
 * _strcpy - copy string
 * @dest: a buffefr
 * @src: source string
 * Return: a pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
