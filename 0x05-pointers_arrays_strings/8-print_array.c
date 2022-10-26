#include "main.h"
#include <stdio.h>

/**
 * print_array - prints inputted number of elements of integer arrays
 * @a: integer arrays
 * @n: number of elements for printing
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
