#include "search_algos.h"

/**
  * binary_search - Search for a value in a sorted array
  *                 of integers
  * @array: Pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If value not present orarray is NULL, -1.
  *         else, the index where value is located.
  *
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, lft, rght;

	if (array == NULL)
		return (-1);

	for (lft = 0, rght = size - 1; rght >= lft;)
	{
		printf("Searching in array: ");
		for (i = lft; i < rght; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lft + (rght - lft) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rght = i - 1;
		else
			lft = i + 1;
	}

	return (-1);
}
