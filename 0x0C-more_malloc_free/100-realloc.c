#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block using mallloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of space allocated for the ptr
 * @new_size: size of new memory block
 * Return: if new_size == oldsize, ptr
 *		if new_size == 0 && ptr not NULL, NULL
 *		else, pointer reallocated to memory block
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_cpy, *fillr;
	unsigned int ind;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);

	}

	if (new_size == 0 && ptr != NULL)

	{
		free(ptr);
		return (NULL);

	}

	fillr = mem;

	for (ind = 0; ind < old_size && ind < new_size; ind++)
	fillr[ind] = *ptr_cpy++;

	free(ptr);
	return (mem);
}
