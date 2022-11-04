#include "main.h"

int find_sqrt(int rr, int r);
int _sqrt_recursion(int n);

/**
 * find_sqrt - find natural square root of input
 * @rr: the number to find its root
 * @r: root to test
 * Return: natural square root else -ve one
 */

int find_sqrt(int rr, int r)
{
	if (r * r == rr)
		return (r);

	if (r == rr / 2)
		return (-1);

	return (find_sqrt(rr, r + 1));

}

/**
 * _sqrt_recursion - returns a number's natural square root
 * @n: number to return the squareroot of
 * Return: natural square root of n else -ve one
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));

}
