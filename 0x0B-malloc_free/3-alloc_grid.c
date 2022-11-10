#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns 2d aray with elements initialized to 0
 * @width: width of 2d array
 * @height: height of 2d array
 *
 * Return: if width or height <= 0 or function fals, NULL
 *		else a ponter to 2d array of integers
 */

int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt_ind, wid_ind;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);
	for (hgt_ind  = 0; hgt_ind < height; hgt_ind++)
	{
		twoD[hgt_ind] = malloc(sizeof(int) * width);

		if (twoD[hgt_ind] == NULL)
		{
			for (; hgt_ind >= 0; hgt_ind--)
				free(twoD[hgt_ind]);

			free(twoD);
			return (NULL);
		}
	}

	for (hgt_ind = 0; hgt_ind < height; hgt_ind++)
	{
		for (wid_ind = 0; wid_ind < width; wid_ind++)
			twoD[hgt_ind][wid_ind] = 0;
	}

	return (twoD);
}
