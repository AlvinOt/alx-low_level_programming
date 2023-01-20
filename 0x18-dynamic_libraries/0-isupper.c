#include "main.h"

/**
 * _isupper - check uppercase letters
 * @c: check character
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
