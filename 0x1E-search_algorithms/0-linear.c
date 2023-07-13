#include "search_algos.h"

/**
 * linear_search - use linear search algorithm to
 * search a value
 *
 * @array: array input
 * @size: array size
 * @value: value searched for
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
