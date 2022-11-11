#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - memory allocated using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
