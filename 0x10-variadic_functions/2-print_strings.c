#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings then new line
 * @separator: strings printed between strings
 * @n: number of strings passed to function
 * @...:number of strings printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringz;
	char *stri;
	unsigned int ind;

	va_start(stringz, n);

	for (ind = 0; ind < n; ind++)
	{
		stri = va_arg(stringz, char *);

		if (stri == NULL)
			printf("(nil)");
		else
			printf("%s", stri);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(stringz);

}
