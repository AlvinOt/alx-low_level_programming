#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: check
 * Return: 0 if lowercase else 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
