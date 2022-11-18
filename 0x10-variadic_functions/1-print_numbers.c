#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers then new line
 * @separator: string between numbers
 * @n: number of intergers passsed to function
 * @...: other integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nambaz;
	unsigned int ind;

	va_start(nambaz, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(nambaz, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nambaz);
}
