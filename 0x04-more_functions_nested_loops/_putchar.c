#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: 1 for success
 * On error, return -1 with appropriate errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
