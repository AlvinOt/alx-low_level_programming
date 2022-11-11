#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates integer arraya and ordders them from min to max
 * @min: array's first value
 * @max: array's last value
 * Return: if function fails or min >max, NULL, else pointer
 */

int *array_range(int min, int max)
{
	int *arr, ind, sz;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	arr = malloc(sizeof(int) * sz);

	if (arr == NULL)
		return (NULL);

	for (ind = 0; ind < sz; ind++)
		arr[ind] = min++;

	return (arr);
}
