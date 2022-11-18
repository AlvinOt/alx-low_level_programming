#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sums of all parameters
 * @n: number of parameters passed to function
 * @...: the other parameters
 * Return: 0 if n == 0 else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nambas;
	unsigned int ind, sum = 0;

	va_start(nambas, n);

	for (ind = 0; ind < n; ind++)
		sum += va_arg(nambas, int);

	va_end(nambas);

	return (sum);
}
