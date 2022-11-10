#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars initializing with with specific char
 * @size: array size to be initialized
 * @c: the char to specifically initialize the array with
 * Return: NULL if function fails or size == 0 else, array pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
