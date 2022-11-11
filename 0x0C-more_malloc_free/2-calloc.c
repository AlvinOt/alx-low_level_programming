#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to arrays for byte size elements
 * @nmemb: the number of elements
 * @size: bite size for each array element
 * Return: NULL if nmemb = 0, size = 0, or function fails else pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fillr;
	unsigned int ind;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	fillr = mem;

	for (ind = 0; ind < (size * nmemb); ind++)
		fillr[ind] = '\0';

	return (mem);

}
