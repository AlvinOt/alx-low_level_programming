#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter
 *		to each array element
 * @array: the array itself
 * @size: array size
 * @action: pointer to the function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0)
		return;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
