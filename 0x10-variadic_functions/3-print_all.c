#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - for printing a char
 * @arg: list o arguments pointing to printed character
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an int
 * @arg: a list of arguments pointing to the integer printed
 */


void print_int(va_list arg)
{
	int namba;

	namba = va_arg(arg, int);
	printf("%d", namba);

}

/**
 * print_float - for printing float
 * @arg: number of arguments pointing to float
 */

void print_float(va_list arg)
{
	float deci;

	deci = va_arg(arg, double);
	printf("%f", deci);

}

/**
 * print_string - to print string
 * @arg: arguments pointing to string printed
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);

}

/**
 * print_all - prints anything then new line
 * @format: character string repping arg types
 * @...: variable number or arguments to print
 * Description ignore arguments not char (*), int float
 *	print nil if string arg is NULL
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printr_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if  (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++
	}
	printf("\n");

	va_end(args);
}
