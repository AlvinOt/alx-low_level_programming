#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
