#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character printed
 * Return: on success 1. -1 on error
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
