#include "function_pointers.h"

/**
 * int_index - search for an integer in an array of integers
 * @array: array of integers
 * @size: size of array
 * @cmp: a pointer to the function used to compare values
 * Return: if element don't match or size less than zero
 *	return -1 else index of 1st element for which cmp
 *	doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]) != 0)
			return (ind);
	}

	return (-1);
}
