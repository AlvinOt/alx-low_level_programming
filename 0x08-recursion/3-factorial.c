#include "main.h"

/**
 * factorial - returns factorial
 * @n: number to find factorial
 * Return: the factorial of n else -ve one for error
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
